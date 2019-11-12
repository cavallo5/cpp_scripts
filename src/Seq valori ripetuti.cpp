#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

typedef int vettore[100];

bool verificaValoriRipetuti(vettore v,int n)
{    
     bool ripetuto=false;
     for (i=0;i<=n-2 && !ripetuto;i++)
       for (j=i+1;j<=n-1&& !ripetuto;j++)
           if (v[i]==v[j]) ripetuto=true;
     return ripetuto;
}

void letturavettore(vettore v, int n)
{      
      for (i=0;i<=n-1;i++)
         cin>>v[i];
}

int main()
{
    int i,j,n;
    vettore x;
    cin>>n;
    letturavettore(x,n)
   if (verificaValoriRipetuti(x,n))
   cout<<"la sequenza contiene valori ripetuti";
   else
   cout<<"la sequenza non contiene valori ripetuti";
     
     system("PAUSE");
      return 0;
}

