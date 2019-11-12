#include<iostream>
#include<cstdlib>
using namespace std;

void somma(int *a,int *b, int *c);
int main()
{
    int *x,*y,*z;
    x=new int;
    y=new int;
    z=new int;
    cin>>*x;
    cin>>*y;
    somma(x,y,z);
    cout<<*z<<endl;
    
system("PAUSE");
return 0;
}

void somma(int *a,int *b, int *c)
{
     *c=*a+*b;
}
