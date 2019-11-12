#include<iostream>
#include<cstdlib>
using namespace std;

//verifica matrice triangolare 
const int DIM=10;
typedef int matrice[DIM][DIM];

void letturavettore(matrice a,int n);
void stampamatrice(matrice a,int n);
bool verificamatricediagonale(matrice a,int n);

int main()
{
    int d;
    cout<<"Inserire la dimensione della matrice"<<endl;
    cin>>d;
    matrice mat;
    letturavettore( mat, d);
    stampamatrice( mat, d);
    if(verificamatricediagonale(mat,d))
    cout<<"Si, la matrice e' diagonale"<<endl;
    else cout<<"No, la matrice non e' diagonale"<<endl;
    
system("PAUSE");
return 0;
}

void letturavettore(matrice a,int n)
{
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
            cout<<"Inserire valore "<<i<<","<<j<<"= ";
      cin>>a[i][j];
      }
}
void stampamatrice(matrice a,int n)
{
     for(int i=0;i<n;i++)
     {
     for(int j=0;j<n;j++)
          {cout.width(4);
           cout<<a[i][j];
           }cout<<endl;
     }
}
bool verificamatricediagonale(matrice a,int n)
{
     bool condizione=true;
     for(int i=0;i<n && condizione;i++)
     for(int j=0;j<n && condizione;j++)
     {if(a[i][j]!=0 && i>j)
     condizione=false;
     }
return condizione;
}
