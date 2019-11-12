#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int numero,divisore,risultato;
    cout<<"Divisione per sottrazioni successive"<<endl;
    cout<<"Inserire il dividendo: ";
    cin>>numero;
    cout<<"Inserire il divisore: ";
    cin>>divisore;
    if(divisore<=0)
    {
                   cout<<"La divisione e' impossibile"<<endl;
    }else
    {
         risultato=0;
         while(numero>=divisore)
         {
                                risultato=risultato+1;
                                numero=numero-divisore;
         }
         cout<<"Il risultato della divisione e' "<<risultato<<" con resto "<<numero<<endl;;
    }

system("PAUSE");
return 0;
}
