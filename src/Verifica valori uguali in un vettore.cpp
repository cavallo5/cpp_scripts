#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    typedef int vettore[100];
    int n;
    cout<<"Quanti numeri nella sequenza?"<<endl;
    cin>>n;
    vettore v;
    for(int i=0;i<n;i++)
    {
            cout<<"v["<<i<<"]=";
            cin>>v[i];
    }
    bool ripetuto=true;
    for(int i=0;i<n-1;i++)
     for(int j=0;j<n;j++)
     if(v[i]==v[j])
     ripetuto=true;
    if(ripetuto)
    cout<<"Contiene valori ripetuti"<<endl;
    else
    cout<<"Non Contiene valori ripetuti"<<endl;
    
system("PAUSE");
return 0;
}
