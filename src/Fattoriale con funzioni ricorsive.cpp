#include<iostream>
#include<cstdlib>
using namespace std;

int fatt(int x);

int main()
{
    int numero,fattoriale;
    cout<<"Inserire il numero: ";
    cin>>numero;
    fattoriale=fatt(numero);
    cout<<"Il fattoriale e' "<<fattoriale<<endl;
system("PAUSE");
return 0;
}

int fatt(int x)
{
    if(x==0) return 1;
    else return x*fatt(x-1);
}
