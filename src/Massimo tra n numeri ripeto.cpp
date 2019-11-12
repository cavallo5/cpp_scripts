#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i,n,a,max;
    i=1;
    max=-1000000;
    cout<<"Programma per calcolare il massimo di n numeri"<<endl;
    cout<<"Quanti numeri vuoi confrontare"<<endl;
    while (i<=n)
    {
          cout<<"Inserire il "<<i<<" numero"<<endl;
          cin>>a;
          if(a>max)
          {
              max=a;     
          }else 
          {
              max=max;
          }
    i++;
    }
system("PAUSE");
return 0;
}
