#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

struct punto
{
       float x,y;
};

typedef punto* poligono;
void LetturaPoligono(poligono & A,int & nA);
void LetturaPunto(punto & P);
punto top(poligono A,int nA);
void ScritturaPunto(punto P);
void ScritturaPoligono(poligono A, int nA);


int main()
{
    poligono A1;
    int nA1;
    cout<<"Programma per il calcolo del vertice piu' in alto di un poligono "<<endl;
    LetturaPoligono(A1,nA1);
    punto alto1=top(A1,nA1);
    cout<<"Il vertice piu' alto del poligono con vertiti "<<endl;
    ScritturaPoligono(A1, nA1);
    cout<<" e' il vertice "<<endl;
    ScritturaPunto(alto1);
    cout<<endl;


system("PAUSE");
return 0;
}

void LetturaPoligono(poligono & A,int & nA)
{
     cout<<"Inserire numero di vertici del poligono: ";
     cin>>nA;
     A=new punto[nA];
     for(int i=0;i<nA;i++)
     {
             cout<<"vertice "<<i<<endl;
     LetturaPunto(A[i]);
     }
}
void LetturaPunto(punto & P)
{
     cout<<"x=";
     cin>>P.x;
     cout<<"y=";
     cin>>P.y;
}
void ScritturaPunto(punto P)
{
     cout<<'('<<P.x<<','<<P.y<<')';
}
punto top(poligono A,int nA)
{
      float d;
      int indmax=0;
      float ymax=A[0].y;
      for(int i=0;i<nA;i++)
        if(A[i].y>ymax)
        {
                       ymax=A[i].y;
                       indmax=i;
        }
      return A[indmax];
}
void ScritturaPoligono(poligono A, int nA)
{
     cout<<'(';
     ScritturaPunto(A[0]);
     for (int i=1;i<nA;i++)
     {
         cout<<',';
         ScritturaPunto(A[i]);
     }
     cout<<')';
}
