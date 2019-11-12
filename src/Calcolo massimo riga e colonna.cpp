#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    const int D=10;
    typedef int matrice[D][D];
    int r,c,max;
    int rmax=0,cmax=0,i=0;
    matrice m;
    cout<<"Calcolo del massimo tra i valori di una matrice (riga e colonna)"<<endl;
    cout<<"Inserire il numero di righe"<<endl;
    cin>>r;
    cout<<"Inserire i numero di colonne"<<endl;
    cin>>c;
    for(int i=0;i<r;i++)
    {
            max=m[0][0];
     for(int j=0;j<c;j++)
     {
             cout<<"Inserire il "<<i<<"."<<j<<" valore: ";
             cin>>m[i][j];
     }
     }
    
    for(int i=0;i<r;i++)
     for(int j=0;j<c;j++)
     {
             if(max<m[i][j])
             {
                            max=m[i][j];
                            rmax=i;
                            cmax=j;
             }
     }
    cout<<"Il valore massimo e' "<<max<<" in posizione "<<rmax<<","<<cmax<<endl;
    
system("PAUSE");
return 0;
}
