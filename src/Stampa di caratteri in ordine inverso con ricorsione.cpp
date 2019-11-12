#include<iostream>
#include<cstdlib>
using namespace std;

//prototipi funzioni
void Inverti();

int main()
{
    cout<<"Programma che stampa caratteri in ordine inverso"<<endl;
    cout<<"La sequenza di caratteri si interrompe quando si inserisce . "<<endl;
    Inverti();
    cout<<endl;
    
system("PAUSE");
return 0;
}

void Inverti()
{
     char a;
     cout<<"Inserire il carattere "<<endl;
     cin>>a;
     if(a!='.') Inverti();
     cout<<a;
}
