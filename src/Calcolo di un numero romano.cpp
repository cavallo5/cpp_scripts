#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,i,valore,risultato;
    char x;
    risultato=0;
    cout<<"Programma per il calcolo di un numero romano"<<endl;
    cout<<"Quante cifre? ";
    cin>>n;
    i=0;
    while (i<n)
    {
          cout<<"Inserire il "<<i<<" valore ";
          cin>>x;
          switch (x)
          {
                 case 'I':valore=1;break;
                 case 'V':valore=5;break;
                 case 'X':valore=10;break;
                 case 'L':valore=50;break;
                 case 'C':valore=100;break;
                 case 'D':valore=500;break;
                 case 'M':valore=1000;break;
                 default:cout<<"Carattere errato"<<endl;
          }
          risultato=risultato+valore;
          i++;
    }
    cout<<"Il numero e' "<<risultato<<endl;
    

system("PAUSE");
return 0;
}
