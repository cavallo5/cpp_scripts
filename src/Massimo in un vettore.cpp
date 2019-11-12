#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,posmax,max;
    const int D=100;
    int v[D];
    cout<<"Programma per il calcolo del massimo di un vettore"<<endl;
    cout<<"Inserire la dimensione del vettore :";
    cin>>n;
    for(int i=0;i<n;i++)
      {
            cout<<"Inserire il "<<i<<" valore: ";
            cin>>v[i];
      }
    posmax=0;
    max=v[0];
    for (int i=1;i<n;i++)
    {
        if(v[i]>max)
        {
        max=v[i];
        posmax=i;
        }
    }
    cout<<"Il massimo e' "<<max<<" in posizione "<<posmax<<endl;
    
system("PAUSE");
return 0;
}
