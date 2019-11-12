#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

struct punto
{
       float x,y;
};

typedef punto* poligono;
void Letturapoligono(poligono & A,int & nA);
void Letturapunto(punto & P);
int main()
{
    poligono A1;
    int nA1;
    Letturapoligono(A1,nA1); 

system("PAUSE");
return 0;
}

void Letturapoligono(poligono & A,int & nA)
{
     cout<<"Inserire numero di vertici del poligono: ";
     cin>>nA;
     A=new punto[nA];
     for(int i=0;i<nA;i++)
     {
             cout<<"vertice "<<i<<endl;
     Letturapunto(A[i]);
     }
}
void Letturapunto(punto & P)
{
     cout<<"x=";
     cin>>P.x;
     cout<<"y=";
     cin>>P.y;
}
