#include<iostream>
#include<cstdlib>
using namespace std;

//prototipo funzione
void Letturavettore(int* & vett,int n);
void Stampavettore(int *vett,int n);

int main()
{
    int n;
    cout<<"Programma per la lettura e la stampa di un vettore "<<endl;
    cout<<"Inserire la dimensione dell'array "<<endl;
    cin>>n;
    int *p;
    Letturavettore(p,n);
    Stampavettore(p,n);
    cout<<endl;
    
system("PAUSE");
return 0;
}

void Letturavettore(int* & vett,int n)
{
     vett=new int[n];
     for(int i=0;i<n;i++)
     {
             cout<<"Inserire il "<<i+1<<" elemento"<<endl;
             cin>>vett[i];
     }
}
void Stampavettore(int *vett,int n)
{
     for(int i=0;i<n;i++)
       cout<<"v["<<i<<"]="<<vett[i]<<endl;
}
