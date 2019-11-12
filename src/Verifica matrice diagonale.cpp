#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    const int rango=10;
    typedef int matrice[rango][rango];
    matrice a;
    int n;
    
    cout<<"Programma che verifica se una matrice e' diagonale"<<endl;
    cout<<"Inserire il rango della matrice quadrata: ";
    cin>>n;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
            cout<<"Inserire il "<<i<<","<<j<<": ";
            cin>>a[i][j];
    }
    //verifica matrice diagonale
    bool diagonale=true;
    for(int i=0;i<n && diagonale;i++)
    for(int j=0;j<n && diagonale;j++)
    {
            if(i!=j && a[i][j]!=0)
            diagonale=false;        
    }
    if(diagonale)
    cout<<"La matrice e' diagonale"<<endl;
    else
    cout<<"La matrice non e' diagonale"<<endl;
    
    
system("PAUSE");
return 0;
}
