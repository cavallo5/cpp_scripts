#include<cstdlib>
#include<iostream>
using namespace std;
#include "listaRarray.h"
#include "pilaRlcoll.h"

lista CreaLista (int n)
{
	int x;
	lista l=Init();
    for (int i=0; i<n; i++)
	{
		cin>>x;
		InsCoda(x,l);
	}
	return l;
}

void StampaLista (lista l)
{
   int n=numElementi(l);
   for (int i=0; i<n; i++)
	{
		cout<<Accedi(i,l);	
	}
}
 
/*
Scrivere una funzione che cancelli il penultimo elemento 
di una lista, servendosi di una pila di appoggio per 
svuotare la lista e poi ripristinarla. Si deve fare uso di 
sole operazioni primitive su tipi astratti lista e pila. 
*/

void CancellaPenultimo(lista & l)
{
     pila p=CreaPila();
     int x;
     
     while (!ListaVuota(l))
     {
         x=AccediTesta(l);
         Push(x,p);
         CancTesta(l);
     }   
     
     x=Top(p); Pop(p);
     InsTesta(x,l);
     
     Pop(p);
     
     while (!PilaVuota(p))
     {
           x=Top(p); Pop(p);
           InsTesta(x,l);
     }
        
}

int main()
{   
     int n;
     cout<<"numero elementi della lista=";
     cin>>n;
     
     lista l=CreaLista(n);
     
     CancellaPenultimo(l);
         
     cout<<endl<<"lista senza il penultimo elemento = ";
     
     StampaLista(l);
     
      system("PAUSE");
     return 0;
}
