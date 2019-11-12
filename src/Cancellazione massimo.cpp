#include<cstdlib>
#include<iostream>
using namespace std;
#include "listaRarray.h"


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
Scrivere una funzione che, data una lista contenente 
numeri interi disordinati e tutti diversi tra loro, 
cancelli l'elemento che contiene il valore più grande.
Si deve fare uso di sole operazioni primitive su liste. 
*/

void CancellaMax(lista & l)
{
     int el;
     int max=AccediTesta(l);
     int pos=0;
     
     for(int i=1;i<numElementi(l);i++)
     {
         el=Accedi(i,l);
         if (max<el)
         {
            max=el;
            pos=i;
         }  
     } 
     
     Cancella(pos,l); 
}

int main()
{   
     int n;
     cout<<"numero elementi della lista=";
     cin>>n;
     
     lista l=CreaLista(n);
     
     CancellaMax(l);
         
     cout<<endl<<"lista senza il valore piu' grande = ";
     
     StampaLista(l);
     
      system("PAUSE");
     return 0;
}
