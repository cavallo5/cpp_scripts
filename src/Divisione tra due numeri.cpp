#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a;
    float b,c;
    cout<<"Programma per il calcolo della divisone tra due numeri"<<endl;
    cout<<"Inserire il dividendo :";
    cin>>a;
    cout<<"Inserire il divisore :";
    cin>>b;
    if(b!=0)
    { c=a/b;
      cout<<"Il risultato della divisione e' "<<c<<endl;
    }
    else
     cout<<"La divisione per zero e' impossibile"<<endl;
    
system("PAUSE");
return 0;
}
