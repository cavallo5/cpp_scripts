#include<iostream>
#include<cstdlib>
using namespace std;
int main ()
{
    int numero, fattoriale;
    cout<<"Inserire il numero"<<endl;
    cin>>numero;
    if (numero >=0)
    {
               fattoriale=1;
               while (numero>1)
               {
                     fattoriale= fattoriale*numero;
                     numero= numero-1;
                     
               }
               cout<<"Il fattoriale vale: "<< fattoriale<< endl;
    }else
    cout<<"No fattoriale!"<<endl;
    
    system ("PAUSE");
    return 0;
}
