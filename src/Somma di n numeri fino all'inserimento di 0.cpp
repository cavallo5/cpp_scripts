#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int x,s,i;
    cout<<"Programma per la somma di n numeri"<<endl;
    cout<<"Inserire 0 per interrompere le operazioni di somma e ottenere il risultato"<<endl;
    s=0;
    i=1;  //introdotta solamente per essere visualizzata
    cout<<"Inserire il "<<i<<" numero: ";
    cin>>x;
    while (x!=0)
    {
          s=s+x;
          i++;
          cout<<"Inserire il "<<i<<" numero: ";
          cin>>x;
    }
    cout<<"Il risultato della somma e' "<<s<<endl;

system("PAUSE");
return 0;
}
