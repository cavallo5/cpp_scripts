#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a;
    cout<<"Non inserire 0"<<endl;
    do
    {
               cin>>a;
               if(a==0)
               cout<<"Riprova coglione"<<endl;
    }while(a==0);
    cout<<"Hai inserito="<<a<<endl;
    

system("PAUSE");
return 0;
}
