#include<iostream>
#include<cstdlib>
using namespace std;


void Inverti();

int main()
{
    cout<<"Stampa caratteri in ordine inverso"<<endl;
    Inverti();
    
system("PAUSE");
return 0;
}

void Inverti()
{
     char c;
     cin>>c;
     if(c != '.') Inverti();
     cout<<c;
}
