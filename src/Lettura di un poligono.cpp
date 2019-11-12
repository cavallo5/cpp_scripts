#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

struct punto
{
       float x,y;
};
typedef punto* poligono;

//prototipi funzioni
void Letturapunto(punto & P);
void Letturapoligono(poligono & A,int & nA);


int main()
{
    cout<<"Programma lettura di un poligono "<<endl;
    poligono A1;
    int nA1;
    Letturapoligono(A1,nA1);
    
system("PAUSE");
return 0;
}
void Letturapunto(punto & P)
{
     cout<<"x=";
     cin>>P.x;
     cout<<"y=";
     cin>>P.y;
}
void Letturapoligono(poligono & A,int & nA)
{
     cout<<"Inserire il numero di vertici del poligono: ";
     cin>>nA;
     A=new punto[nA];
     for(int i=0;i<nA;i++)
     {
             cout<<"Vertice "<<i<<endl;
             Letturapunto(A[i]);
     }
}
