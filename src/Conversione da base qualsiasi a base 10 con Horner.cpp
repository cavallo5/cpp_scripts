#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout<<"Conversione da base qualsiasi a base 10"<<endl;
    int n,i,base,valore,cifra;
    cout<<"Inserire il numero di cifre del numero da convertire ";
    cin>>n; //numero di cifre
    cout<<"Inserire la base in cui e' espresso il numero da convertire ";
    cin>>base;
    i=1; valore=0;
    cout<<"Inserire le cifre a partire dalla piu' significativa"<<endl;
    
    while (i<=n) 
	{
          cout<<"c"<<n-i<<"=";
          cin>>cifra; //lettura cifre a partire dalla piu' significativa
          valore=valore*base+cifra;
          i=i+1;
	}
	cout<<"Il numero in base 10 e' ";
	cout<<valore<<endl;

    system("PAUSE");
    return 0;
}
