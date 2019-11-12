#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{    
     int numero,divisore,risultato;
     //divisione per sottrazione succcessiva di un numero naturare
     cout<<"Inserire il numero"<<endl;
     cin>>numero;
     cout<<"Inserire il divisore"<<endl;
     cin>>divisore;
     if (divisore >0)
     {
                  risultato =0;
                  while (divisore <= numero)
                  {
                        risultato= risultato+1;
                        numero= numero - divisore;
                  }
                  cout<<"Il risultato e' " <<risultato<<" con resto " <<numero<<endl;
     } else
           {
                  cout<<"La divisione per zero è impossibile!"<<endl;
           }     
     system("PAUSE");
     return 0;
} 
     
