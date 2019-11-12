#include <iostream>
#include <cstdlib>
using namespace std;

const int D=100;
typedef int sequenza[D];

bool verificadistanzak(sequenza v, int n, int k)
{
    int i=1;
    bool condizione=true;
    while (i<n && condizione)
    {
         if (v[i]!=v[i-1]+k) condizione=false;
         i++;
    }   
    return condizione;
}

void letturasequenza(sequenza seq, int l)
{
    for (int i=0;i<l;i++)
    {    
        cout<<"valore "<<i<<" = ";
        cin>>seq[i];
    } 
}

int main()
{     
    int n; 
    sequenza w;
    const int d=3;
      
    cout<<"quanti valori compongono la sequenza? ";
    cin>>n;
    letturasequenza(w, n);
    
    if (verificadistanzak(w,n,d))
      cout<<"la sequenza e' costituita da valori a distanza "<<d;
    else
      cout<<"la sequenza non e' costituita da valori a distanza "<<d;
    cout<<endl;  
      
     system ("PAUSE");
     return 0;
}
