#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Programma per il calcolo della divisione intera tra 2 numeri"<<endl;
    cout<<"Inserire il dividendo"<<endl;
    cin>>a;
    cout<<"Inserire il divisore"<<endl;
    cin>>b;
    if (b!=0)
    {
             c=a/b;
             cout<<"Il risultato e': "<<c<<endl;
    }
    else cout<<"La divisione per zero e' impossibile"<<endl;

system("PAUSE");
return 0;
}
