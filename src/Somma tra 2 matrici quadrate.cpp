#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    const int DIM=10;
    typedef int matrice[DIM][DIM];
    int n;
    cout<<"Programma per la somma tra due matrici"<<endl;
    cout<<"Inserire il rango delle 2 matrici: ";
    cin>>n;
    matrice a,b,c;
    cout<<"Caricamento prima matrice"<<endl;
    //Prima matrice
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     {
             cout<<"Inserire il valore "<<i<<","<<j<<":";
             cin>>a[i][j];
     }
    //Seconda matrice
    cout<<"Caricamento seconda matrice"<<endl;
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     {
             cout<<"Inserire il valore "<<i<<","<<j<<":";
             cin>>b[i][j];
     }
     //Somma matrici
     for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     {
     
             c[i][j]=a[i][j]+b[i][j];
     }
     //Stampa matrice
     cout<<"La matrice somma e': "<<endl;
     for(int i=0;i<n;i++)
     {
     for(int j=0;j<n;j++)
     {
             cout.width(4);
             cout<<c[i][j];
     }
     cout<<endl;
    }

system("PAUSE");
return 0;
}

