#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    const int DIM=100;
    typedef int vettore[DIM];
    vettore a,b,c;
    int n;
    cout<<"Programma per la somma tra due vettori"<<endl;
    cout<<"Inserire il numero di elementi dei vettori: ";
    cin>>n; //n è uguale per i vettori
    //lettura vettore a
    cout<<"Primo vettore"<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<"Inserire il "<<i<<" componente: ";
    cin>>a[i];
    }
    //lettura vettore b
    cout<<"Secondo vettore"<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<"Inserire il "<<i<<" componente: ";
    cin>>b[i];
    }
    //somma dei due vettori
    for(int i=0;i<n;i++)
    {
            c[i]=a[i]+b[i];
    }
    //stampa vettore c (il vettore somma)
    cout<<"Il vettore somma e' "<<endl;
    for(int i=0;i<n;i++)
    {
            cout<<"c=["<<i<<"]="<<c[i]<<endl;
    }
    
system("PAUSE");
return 0;
}
