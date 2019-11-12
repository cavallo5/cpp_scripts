#include<iostream>
#include<cstdlib>
using namespace std;

const int D=10;
typedef int matrice[D][D];
bool Verificamatricediagonale (matrice mat, int n)
{
     bool diagonale=true;
     for (int i=0; i<n && diagonale; i++)
         for (int j=0; j<n && diagonale; j++)
                if (i != j && mat [i][j] !=0)
                                     diagonale=false;
     return diagonale;
}

int main()
{
    int n;
    matrice a;
    cout<<"Inserisci la dimensione della matrice quadrata: ";
    cin>>n;
    Leggimatrice(a,n,n)
    if (Verificamatricediagonale (a,n))
        cout<<"La matrice è diagonale";
    else
        cout<<"La matrice non è diagonale";
        

system("PAUSE");
return 0;
}
