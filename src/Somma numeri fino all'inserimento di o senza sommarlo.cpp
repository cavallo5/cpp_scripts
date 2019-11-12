#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int s,x,i;
    cout<<"Programma per la somma di n numeri senza sommare il valore usato per l'uscita"<<endl;
    cout<<"Inserire 0 per interrompere"<<endl;
    s=0;
    i=1;   //introdotta solamente per essere visualizzata
    cout<<"Inserisci il "<<i<<" valore: ";
    cin>>x;
    while (x!=0)
    {
          s=s+x;
          i=i+1;
          cout<<"Inserisci il "<<i<<" valore: ";
          cin>>x;
    }
    cout<<"La loro somma e': "<<s<<endl;
    
    
    
    
    
system("PAUSE");
return 0;
}
