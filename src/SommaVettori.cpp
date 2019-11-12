#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{	
  const int DIM=100 ;  //dimensione massima dei vettori
  typedef int vettore[DIM]; 
 
  vettore v1,v2,v3;  

  cout<<"Programma per la somma di due vettori"<<endl;
 
  int n;	//dimensione effettiva del vettore
  cout<< "Somma di due vettori"<<endl;
  cout<< "Inserire la dimensione dei vettori ";
  cin>>n;		//n e' uguale per entrambi
		
  cout<<"Input primo vettore"<<endl;
  for (int i=0;i<n;i++)  
  {
	cout<<"Inserire il "<<i+1<<" valore ";
	cin>>v1[i];
  }

  cout<<"Input secondo vettore"<<endl;
  for (int i=0;i<n;i++)  
  {
	cout<<"Inserire il "<<i+1<<" valore ";
	cin>>v2[i];
  }
						
  for (int i=0;i<n;i++)   //somma dei due vettori
		v3[i]=v1[i]+v2[i];
 
  cout<<"Il vettore risultato e':"<<endl;
  for (int i=0;i<n;i++)  //stampa risultato 
      cout<<"v["<<i<<"]="<<v3[i]<<endl;

  system("PAUSE");
  return 0;
}
