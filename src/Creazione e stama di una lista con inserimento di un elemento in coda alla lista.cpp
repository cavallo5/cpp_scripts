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
void CreaLista(pelem & p,int n);
void InsCoda(pelem & p,int x);
void StampaLista(pelem & p);
//usiamo funzioni ricorsive per le funzioni CreaLista e StampaLista per velocizzare la scrittura del programma
int main()
{
    cout<<"Programma per la creazione e la stampa di una lista, con inserimento"<<endl;
    cout<<"di un elemento in coda alla lista"<<endl;
    int n;
    cout<<"Quanti elementi?"<<endl;
    cin>>n;
    cout<<"Inserimento elementi della lista"<<endl;
    pelem lista;
    CreaLista(lista,n);
    cout<<"La lista e' "<<endl;
    StampaLista(lista);
    cout<<endl<<"Inserimento elemento in coda"<<endl;
    cout<<"Elemento da inserire in coda alla lista?"<<endl;
    int x;
    cin>>x;
    InsCoda(lista,x);
    cout<<"La lista con il nuovo elemento in coda e'"<<endl;
    StampaLista(lista);
    cout<<endl;

system("PAUSE");
return 0;
}
void CreaLista(pelem & p,int n)
{
     if(n>0)
     {
            p=new elemento;
            cin>>p->valore;
            CreaLista(p->succ,n-1);
     }
     else
     {
         p=NULL;
     }
}

void InsCoda(pelem & p,int x)
{
     if(p==NULL) //caso lista nulla
     {
                 p=new elemento;
                 p->valore=x;
                 p->succ=NULL;
     }
     else
     {
         pelem p1; 
         p1=p;
         while(p1->succ!=NULL)
         {
                                p1=p1->succ;
         }
         p1->succ=new elemento;
         p1=p1->succ;
         p1->valore=x;
         p1->succ=NULL;
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
