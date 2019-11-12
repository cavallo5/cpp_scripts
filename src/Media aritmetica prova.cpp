#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int i=1,n,x,s=0;
    cout<<"Programma per il calcolo della media aritmetica tra n valori"<<endl;
    cout<<"Quanti numeri?"<<endl;
    cin>>n;
    while (i<=n)
    {
          cout<<"Inserisci "<<i<<"numero"<<endl;
          cin>>x;
          s=s+x;
          i++;
    }
    s=s/n;
    cout<<"La media aritmetica e'"<<s<<endl;
    

system("PAUSE");
return 0;
}
