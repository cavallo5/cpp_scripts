#include <iostream>
#include <cstdlib>
using namespace std;

typedef int** matrice;

matrice InizializzaMatrice(int r,int c);
void LetturaMatrice(matrice mat, int r,int c);
void SommaMatrici(const matrice mat1,const matrice mat2,matrice matsomma, int r,int c);
void StampaMatrice(const matrice mat, int r,int c);

int main()
{
      matrice a,b,c; 
      int nr,nc;
      cout<< "Inserire il numero di righe della matrice ";
      cin>>nr;
      cout<< "Inserire il numero di colonne della matrice ";
      cin>>nc;
      a=InizializzaMatrice(nr,nc);
      b=InizializzaMatrice(nr,nc);
      c=InizializzaMatrice(nr,nc);
      cout<<"Inserire i valori della prima matrice"<<endl;
      LetturaMatrice(a,nr,nc);
      cout<<"Inserire i valori della seconda matrice"<<endl;
      LetturaMatrice(b,nr,nc);
      SommaMatrici(a,b,c,nr,nc);
      cout<<"Risultato della somma"<<endl;
      StampaMatrice(c,nr,nc);
 
      system("PAUSE");
      return 0;
}

matrice InizializzaMatrice(int r,int c)
{ 
  matrice mat;
  mat = new int*[r];
  for (int i=0;i<r;i++)
        mat[i]=new int[c];
  return mat;
}

void LetturaMatrice(matrice mat, int r,int c)
{
  for (int i=0;i<r;i++)
       for (int j=0;j<c;j++)
       {
	       cout<<"Inserire il valore "<<i<<','<<j<<':';
           cin>>mat[i][j];
       }
}

void SommaMatrici(const matrice mat1,const matrice mat2,matrice matsomma, int r,int c)
{
   for (int i=0;i<r;i++)
       for (int j=0;j<c;j++)
          matsomma[i][j]=mat1[i][j]+mat2[i][j];
}

void StampaMatrice(const matrice mat, int r,int c)
{
   for (int i=0;i<r;i++)
   {
       for (int j=0;j<c;j++)
       {  cout.width(4);
          cout << mat[i][j];
       }
       cout<<endl;
   }
}

