#include<iostream>
#include<cstdlib>
using namespace std;

struct elemento
{
       int valore;
       elemento* succ;
};

typedef elemento* pelem;

//prototipi funzioni
void CreaListaInv(pelem & p, int n);
void StampaLista(pelem & p);

int main()
{
    cout<<"Programma per la creazione di una lista in ordine inverso e la stampa"<<endl;
    cout<<"con uso di funzioni ricorsive"<<endl;
    int n;
    cout<<"Quanti elementi"<<endl;
    cin>>n;
    cout<<"Inserimento elementi della lista"<<endl;
    pelem lista;
    CreaListaInv(lista,n);
    cout<<"La lista in ordine inverso e'"<<endl;
    StampaLista(lista);
    cout<<endl;

system("PAUSE");
return 0;
}

void CreaListaInv(pelem & p, int n)
{
     if(n>0)
     {
            p=new elemento;
            CreaListaInv(p->succ,n-1);
            cin>>p->valore;
     }
     else
     {
         p=NULL;
     }
}
void StampaLista(pelem & p)
{
     if(p!=NULL)
     {
                cout<<p->valore<<" ";
                StampaLista(p->succ);
     }
}
