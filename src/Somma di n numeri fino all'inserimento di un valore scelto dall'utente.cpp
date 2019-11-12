#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int uscita,x,s,i;
    s=0;
    i=1;   //Introdotta solamente per essere visualizzata
    cout<<"Programma per la somma di n numeri "<<endl;
    cout<<"Scegliere il numero con il quale finire la somma di n numeri: ";
    cin>>uscita;
    cout<<"Inserire il "<<i<<" valore:";
    cin>>x;
    while(x!=uscita)
    {
               i++;
               s=s+x;
               cout<<"Inserire il "<<i<<" valore:";
               cin>>x;
    }
    cout<<"Il risultato della somma e':"<<s<<endl;
    

system("PAUSE");
return 0;
}
