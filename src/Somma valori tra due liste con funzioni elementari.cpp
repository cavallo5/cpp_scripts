#include <iostream>
#include <cstdlib>
using namespace std;
#include "listaRarray.h"

void SommaValoriCorrisp(lista l1, lista l2, lista & l3)
 {
      
      int n1=numElementi(l1);
      int n2=numElementi(l2);
      int n;
      if (n1<n2) n=n1; else n=n2;
      int somma;
      
      for(int i=0;i<n;i++)
      {
            somma=Accedi(i,l1)+Accedi(i,l2);
            InsCoda(somma,l3);
      }
      
      if (n1>n2)
      for(int i=n2;i<n1;i++)
      {
            somma=Accedi(i,l1);
            InsCoda(somma,l3);
      }
      if (n1<n2)
      for(int i=n1;i<n2;i++)
      {
            somma=Accedi(i,l2);
            InsCoda(somma,l3);
      }
}

lista CreaLista (int n)
{
	int x;
	lista l=Init();
	for (int i=0; i<n; i++)
	{
		cin>>x;
		Inserisci(x,i,l);
	}
	return l;
}

void StampaLista(lista l)
{
    int x;
    int n=numElementi(l);
	for (int i=0; i<n; i++)
    {
        x=Accedi(i,l); 
        cout<<x;
    }
}
      
int main()
{
    int n;
    int m;
    cout<<"numero di elementi lista 1";
    cin>>n;
    lista l1=CreaLista(n);
    cout<<"numero di elementi lista 2";
    cin>>m;
    lista l2=CreaLista(m);
    cout<<"liste immesse"<<endl;
    StampaLista(l1);
    cout<<endl;
    StampaLista(l2);
    cout<<endl;
    lista l3;
    SommaValoriCorrisp(l1,l2,l3);
    cout<<"lista somma "<<endl;
    StampaLista(l3);
    cout<<endl;
     
system("PAUSE");
return 0;
}
