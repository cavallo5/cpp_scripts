#include<iostream>
#include<cstdlib>
using namespace std;

struct elemento
{
       int valore; //valore di un elemento
       elemento* succ; //puntatore all'elemento successivo
};
int main()
{
    int n;
    cout<<"Creazione di una lista con n elementi"<<endl;
    cout<<"Quanti elementi?"<<endl;
    cin>>n;
    cout<<endl;
    elemento* p;         //puntatore p di tipo elemento*
    p=new elemento;      //allocazione primo elemento
    cout<<"Inserire il 1 elemento"<<endl;
    cin>>p->valore;
    elemento* p1;
    p1=p;
    for(int i=1;i<n;i++)
    {
            cout<<"Inserire il "<<i+1<<" elemento"<<endl;
            p1->succ=new elemento;
            p1=p1->succ;
            cin>>p1->valore;
    }
    p1->succ=NULL;
    
system("PAUSE");
return 0;
}
