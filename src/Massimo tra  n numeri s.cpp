#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int x,n,i=1,max=-1000000;
    cout<<"Programma per il calcolo del massimo tra n numeri"<<endl;
    cout<<"Quanti numeri vuoi confrontare?"<<endl;
    cin>>n;
    while (i<=n)
    {
          cout<<"Inserire il "<<i<<" numero"<<endl;
          cin>>x;
          if (x>max)
          {
                    max=x;
          }else max=max;
    i=i+1;
    }
    cout<<"Il massimo e' "<<max<<endl;

system("PAUSE");
return 0;
}
