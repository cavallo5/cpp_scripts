#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,x,max,i;
    cout<<"Programma per il calcolo del massimo tra n numeri"<<endl;
    cout<<"Quanti numeri vuoi confrontare? ";
    cin>>n;
    cout<<"Inserire il 0 valore: ";
    cin>>x;
    max=x;
    i=1;
    while (i<n)
    {
          cout<<"Inserire il "<<i<<" valore: ";
          cin>>x;
          if(x>max)
           max=x;
          else
           max=max;
          i++;
    }
    cout<<"Il massimo e':"<<max<<endl;
    
    
system("PAUSE");
return 0;
}
