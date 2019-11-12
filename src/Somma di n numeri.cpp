01/04/12 22.23
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a,s,n,i;
    cout<<"Programma per la somma di n numero"<<endl;
    cout<<"Quanti numeri vuoi sommare?"<<endl;
    cin>>n;
    if ('n')
    cout<<"errore";
    else
    s=0;
    i=1;
    while (i<=n)
    {
          cout<<"Inserire il "<<i<<" numero"<<endl;
          cin>>a;
          cout<<endl;
          s=s+a;
          i++;
    } 
    cout<<"La somma e' "<<s<<endl;
    
system("PAUSE");
return 0;    
}
