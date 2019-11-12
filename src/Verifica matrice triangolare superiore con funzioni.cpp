#include<iostream>
#include<cstdlib>
using namespace std;

const int dimmax=100;
typedef int matrice [dimmax][dimmax];

void letturamatrice(matrice mat,int n);
void stampamatrice(matrice mat, int n);
bool triangolare(matrice mat, int n);

int main()
{
    int dim;
    matrice a;
    cout<<"Inserire la dimensione della matrice: "<<endl;
    cin>>dim;
    cout<<"Caricamento matrice: "<<endl;
    letturamatrice(a,dim);
    cout<<"La matrice caricata: "<<endl;
    stampamatrice(a,dim);
    if(triangolare(a,dim))
    cout<<"La matrice e' triangolare superiore"<<endl;
    else
    cout<<"La matrice non e' triangolare superiore"<<endl;
    
    
system("PAUSE");
return 0;
}


void letturamatrice(matrice mat,int n)
{
     for(int i=0;i<n;i++)
         for (int j=0;j<n;j++)
         {
             cout<<"Inserire l'elemento "<<i<<"."<<j<<"; ";
             cin>>mat[i][j];
         }
}

void stampamatrice(matrice mat, int n)
{
     for(int i=0;i<n;i++)
     {
        for (int j=0;j<n;j++)
        {
            cout.width(4);
            cout<<mat[i][j];
            
        }
        cout<<endl;
     }
}


bool triangolare(matrice mat, int n)
{
     bool triangolare =true;
     for(int i=0; i<n && triangolare;i++)
       for (int j=0; j<n && triangolare; j++)
       {
           if(i>j && mat[i][j]!=0)
           triangolare=false;
       }
       return triangolare;
}
