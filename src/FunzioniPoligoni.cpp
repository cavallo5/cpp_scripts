#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

struct punto
{	float x,y ;
} ;

typedef punto* poligono;

float distanza(punto P, punto Q)
{
	float d,dx,dy;
  	dx=P.x-Q.x;
	dy=P.y-Q.y;
	d=sqrt(dx*dx+dy*dy);
	return d;
}

float distmin (poligono A, int nA, 
               poligono B, int nB,
               int & posA, int & posB)
{
	float d;
    float dmin=distanza(A[0],B[0]);
    posA=0;
    posB=0;
	for (int i=0;i<nA;i++)
		for (int j=0;j<nB;j++)
		{
	          d=distanza(A[i],B[j]);
	          if (d<dmin)
	          {
		         dmin=d;
		         posA=i;
		         posB=j;
              }
        }
 	return dmin;
}

// trovare il punto più in alto (y maggiore)
punto top(poligono A, int nA)
{
	float d;
    int indmax;
    float ymax=A[0].y;
	for (int i=1;i<nA;i++)
	    if (A[i].y>ymax)
	    {
		   ymax=A[i].y;
		   indmax=i;
        }
 	return A[indmax];
}

void LetturaPunto(punto & P)
{
     cout<<"x=";
     cin>>P.x;
     cout<<"y=";
     cin>>P.y;
}

void LetturaPoligono(poligono & A, int & nA)
{
     cout<<"Inserire numero di vertici del poligono:";
     cin>>nA;
     A=new punto[nA];
     for (int i=0;i<nA;i++)
     {
         cout<<"vertice "<<i<<endl;
         LetturaPunto(A[i]);
     }
}

void ScritturaPunto(punto P)
{
     cout<<'('<<P.x<<','<<P.y<<')';
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

int main()
{
 	poligono A1,A2;
    int nA1, nA2;
    LetturaPoligono(A1,nA1);
    LetturaPoligono(A2,nA2);
    int pos1,pos2;
    float d=distmin(A1,nA1,A2,nA2,pos1,pos2);
	cout<<"distanza minima="<<d<<endl;
    cout<<"tra i punti: ";
    ScritturaPunto(A1[pos1]);
    ScritturaPunto(A2[pos2]);
    cout<<endl;
    
    system("PAUSE");
    return 0;
}
