#include <iostream>
#include <cstdlib>

using namespace std;

const int dimMax=100;
typedef int matrice [dimMax][dimMax];

void letturaMatrice (matrice mat, int n);
void stampaMatrice (matrice mat, int n);
bool triangolare (matrice mat, int n);

int main ()
{
    int dim;
    matrice A;
    cout<<"Inserire la dimensione della matrice quadrata: "<< endl;
    cin>> dim;
    
    cout<<"Caricamanto della matrice: "<< endl;
    letturaMatrice (A, dim);
     cout<<"La Matrice: " << endl;
     stampaMatrice (A, dim);    
     if (triangolare (A, dim))
        cout<<"matrice triangolare superiore "<< endl;
    else
        cout<<"matrice non triangolare superiore "<< endl;
        
    system("PAUSE");
    return 0;
}


bool triangolare (matrice mat, int n)
{
     bool triangolare = true;
     for (int i=0; i<n && triangolare; i++)
          for (int j=0; j<n && triangolare; j++)
          {
              if (i > j && mat [i][j]!= 0)
                 triangolare = false;
          }          
     return triangolare;
}


void letturaMatrice (matrice mat, int n)
{
     for (int i=0; i<n; i++)
          for (int j=0; j<n; j++)
          {
              cout<<"Inserire l'elemento "<< i << ", "<< j <<" :";
              cin>>mat[i][j];
          }     
}

void stampaMatrice (matrice mat, int n)
{
    for (int i=0;i<n;i++)
    {
          for (int j=0;j<n;j++)
          {
              cout.width (4);
              cout<< mat[i][j];
          }
          cout << endl;
    }     
     
}
