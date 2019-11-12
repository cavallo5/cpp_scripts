#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{     
    int n; 
    int v[100];
    const int k=3;
      
    cout<<"quanti valori compongono la sequenza? ";
    cin>>n;
    
    for (int i=0;i<n;i++)
    {    
        cout<<"valore "<<i<<" = ";
        cin>>v[i];
    } 
    
    int i=1;
    
    bool condizione=true;
    
    while (i<n && condizione)
    {
         if (v[i]!=v[i-1]+k)  condizione=false;
         i++;
    }   
     
    if (condizione)
      cout<<"la sequenza e' costituita da valori a distanza "<<k;
    else
      cout<<"la sequenza non e' costituita da valori a distanza "<<k;
    cout<<endl;  
      
     system ("PAUSE");
     return 0;
}
