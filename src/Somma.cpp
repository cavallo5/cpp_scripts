#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    const int USCITA= -100;
    int s,x,i;
    cout<<"Programma per il calcolo della somma di numeri"<<endl;
    cout<<"Inserire "<<USCITA<<" per interrompere"<<endl;
    s=0;
    i=0;
    do
    {
        s=s+x;
        i=i+1;
        cout<<"Inserisci il "<<i<<" valore: ";
        cin>>x;
    }while (x!=USCITA);
    cout<<"La loro somma e':" <<s<<endl;
    
system("PAUSE");
return 0;
}
