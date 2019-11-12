#include<iostream>
#include<cstdlib>
using namespace std;
int main ()
{
    int parteintera,n,base;
    float numero, partefrazionaria;
    cout<<"Conversione da base 10 a base qualsiasi di numeri frazionari"<<endl;
    cout<<"Numero in base 10= ";
    cin>>numero;
    cout<<endl;
    cout<<"Base di arrivo= ";
    cin>>base;
    cout<<endl<<"Numero di cifre decimale volute= ";
    cin>>n;
    partefrazionaria=numero;
    int i=1;
    cout<<"O";
    while (partefrazionaria!=0 && i<=n)
        {
            numero=partefrazionaria*base;
            parteintera=numero;
            cout<<parteintera;
            partefrazionaria=numero-parteintera;
            i++;
        }

    
    
    
system("PAUSE");
return 0;   
}
