#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
      const int NR=8;
      const int NC=6;

      typedef int matrice[NR][NC];

      matrice a,b,c;

      int n,m;
      cout<<"numero di righe =";
      cin>>n;
      cout<<"numero di colonne =";
      cin>>m;

      int i,j;
      for (i=0;i<n;i++)
          for (j=0;j<m;j++)
          {
              cout<<"a["<<i<<"]["<<j<<"]=";
              cin>>a[i][j];
          }

      for (i=0;i<n;i++)
          for (j=0;j<m;j++)
          {
              cout<<"b["<<i<<"]["<<j<<"]=";
              cin>>b[i][j];
          }

      for (i=0;i<n;i++)
          for (j=0;j<m;j++)
              c[i][j]=a[i][j]+b[i][j];

      for (i=0;i<n;i++)
      {
          for (j=0;j<m;j++)
              cout<<c[i][j]<<" ";
          cout<<endl;
      }

      system("PAUSE");
      return 0;
}
