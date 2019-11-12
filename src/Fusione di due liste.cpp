#include<iostream>
#include<cstdlib>
using namespace std;

struct elemento
{
       int valore;
       elemento*succ;
};

typedef elemento* pelem;
//prototipi funzioni
void CreaLista(pelem & p,int n);
void StampaLista(pelem & p);
void Fusione(pelem & l1,pelem & l2,pelem & l3);

int main()
{
    cout<<"Lettura e stampa di due liste ordinate e costruzione di una terza lista fusione"<<endl;
    cout<<" delle due liste iniziali in cui e' mantenuto l'ordinamento degli elementi"<<endl;
    int n;
    cout<<"Quanti elementi della lista 1"<<endl;
    cin>>n;
    cout<<"Inserimento elementi della lista 1"<<endl;
    pelem lista1;
    CreaLista(lista1,n);
    cout<<"La lista e'"<<endl;
    StampaLista(lista1);
    cout<<endl;
    int m;
    cout<<"Quanti elementi della lista 2?"<<endl;
    cin>>m;
    cout<<"Inserimento elementi della lista 2"<<endl;
    pelem lista2;
    CreaLista(lista2,m);
    cout<<"La lista e'"<<endl;
    StampaLista(lista2);
    cout<<endl;
    cout<<"Creazione terza lista"<<endl;
    pelem lista3;
    Fusione(lista1,lista2,lista3);
    cout<<"La lista 3 fusione delle prime 2 e'"<<endl;
    StampaLista(lista3);
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

void StampaLista(pelem & p)
{
     if(p!=NULL)
     {
                cout<<p->valore<<" ";
                StampaLista(p->succ);
     }
}
void Fusione(pelem & l1,pelem & l2,pelem & l3)
{
     l3=new elemento;    //record generatore;
     pelem paux=l3;
     l3->succ=NULL;
     while(l1!=NULL && l2!=NULL)
     {
                    if(l1->valore < l2->valore)
                    {
                            paux->succ=l1;
                            l1=l1->succ;
                    }
                    else
                    {
                        paux->succ=l2;
                        l2=l2->succ;
                    }
                    paux=paux->succ;
     }  //una delle due liste e' finita
     if(l1!=NULL)
     {
          paux->succ=l1;
          l1=NULL;
     }
     if(l2!=NULL)
     {
           paux->succ=l2;
           l2=NULL;
     }
     paux=l3;
     l3=l3->succ;
     delete paux; //deallocazione record generatore
                    
}
