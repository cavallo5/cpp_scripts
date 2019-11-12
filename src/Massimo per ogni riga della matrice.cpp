#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    const int D=10;
    typedef int matrice[D][D];
    typedef int vettore[D];
    int n;
    matrice a;
    vettore z;
    cout<<"Programma per il calcolo del massimo per ogni riga di una matrice"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     {
             cout<<"Inserire il "<<i<<","<<j<<" valore: ";
             cin>>a[i][j];
     }
     cout<<endl;
     int max;
     for(int i=0;i<n;i++)
     {
     max=a[i][0];
     for(int j=0;j<n;j++)
     if(a[i][j]>max)
     max=a[i][j];
     z[i]=max;
     }
     cout<<endl;
     for(int i=0;i<n;i++)
     {
             cout<<"I valori massimi per ogni riga sono: "<<endl;
             cout<<"z["<<i<<"]="<<z[i]<<endl;
     }
     
      

system("PAUSE");
return 0;    
}
