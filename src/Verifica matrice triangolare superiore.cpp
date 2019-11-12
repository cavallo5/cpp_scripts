#include<iostream>
#include<cstdlib>
using namespace std;

const int DIM=10;
typedef int matrice[DIM][DIM];

//prototipi delle funzioni
void letturamatrice(matrice mat,int n);
void stampamatrice(matrice mat,int n);
bool verificamatricetriangolare(matrice mat,int n);
int main()
{
    int r;
    cout<<"Programma che verifica se una matrice e' triangolare superiore"<<endl;
    cout<<"Inserire la dimensione: ";
    cin>>r;
    matrice m;
    letturamatrice(m,r);
    stampamatrice(m,r);
    if(verificamatricetriangolare(m,r))
    cout<<"La matrice e' triangolare"<<endl;
    else cout<<"La matrice non e' triangolare"<<endl;

system("PAUSE");
return 0;
}
void letturamatrice(matrice mat,int n)
{
     for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     {
     cout<<"Inserire il "<<i<<"."<<j<<" valore= ";
     cin>>mat[i][j];
     }
}
void stampamatrice(matrice mat,int n)
{for(int i=0;i<n;i++)
   {for(int j=0;j<n;j++)
        {cout.width(4);
         cout<<mat[i][j];
        }cout<<endl;
    }
}
bool verificamatricetriangolare(matrice mat,int n)
{
     bool triangolare=true;
     for(int i=0;i<n && triangolare;i++)
     for(int j=0;j<n && triangolare;j++)
     {if(mat[i][j]!=0 && i>j)
      triangolare=false;
     }
     return triangolare;
}
