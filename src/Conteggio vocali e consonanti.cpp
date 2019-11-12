#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    char lettera;
    int i=0,n,conteggioconsonanti=0,conteggiovocali=0;
    cout<<"Conteggio vacali e consonanti"<<endl<<endl;
    cout<<"Scrivere le lettere in minuscolo per non avere errori"<<endl;
    cout<<"Di quante lettere e' composta la sequenza?"<<endl;
    cin>>n;
    while (i<n)
         {
               cout<<"Lettera "<<i<<"= ";
               cin>>lettera;
               switch(lettera)
                    {
                              case 'a': 
                              case 'e': 
                              case 'i': 
                              case 'o': 
                              case 'u': conteggiovocali=conteggiovocali+1; break;
                              default: conteggioconsonanti=conteggioconsonanti+1;
                    }
               i++;
          }
    cout<<"Totale vocali "<<conteggiovocali<<endl;
    cout<<"Totale consonanti "<<conteggioconsonanti<<endl;
    

system ("PAUSE");
return 0;    
}
