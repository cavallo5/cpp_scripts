#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i,n,a,max;
    cout<<"Programma per calcolare il massimo tra n numeri"<<endl;
    cout<<"Quanti numeri vuoi confrontare?"<<endl;
    cin>>n;
    i=1;
    max=-1000000;
    while (i<=n)
    {
          cout<<"Inserire il "<<i<<" numero"<<endl;
          cin>>a;
          if (a>max)
            { 
                    max=a;
            }else {
                  max=max;
                  }
            i++;
     }
     cout<<"Il massimo e' "<<max<<endl;
    
system ("PAUSE");
return 0;
}
