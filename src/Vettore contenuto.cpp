#include <iostream>
#include <cstdlib>
using namespace std;

const int dimMax=100;
typedef int vettore [dimMax];

int main()
{
    int n, m;
    vettore A, B;
    cout << "Inserisci la dimensione del Vettore A "<< endl;
    cin>> n;
    cout << "Inserisci la dimensione del Vettore B "<< endl;
    cin>> m;
   
    cout << "Caricamento del Vettore A" << endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Inserire il " << i+1 << " valore ";
        cin>>A[i];
    }
    
    cout << "Caricamento del Vettore B" << endl;
    for (int i=0;i<m;i++)
    {
        cout<<"Inserire il " << i+1 << " valore ";
        cin>>B[i];
    }       
    bool contenuto = true;
    int i, j;
    i = 0;
    do
    {
        j = 0;
        while(j<m && A[i]!=B[j])
        {
                  j++;
        }
        if ( j==m)
        {
             contenuto = false;
        }
        i++;
    }while(i < n && contenuto);

    cout << "Stamp del Vettore A" << endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Elemento "<< i+1 << " = " <<A[i]<< endl;
    }
    cout << "Stamp del Vettore B" << endl;
    for (int i=0;i<m;i++)
    {
        cout<<"Elemento "<< i+1 << " = " <<B[i]<< endl;
    }    
    if (contenuto)
         cout << "Tutti gli elementi del Vettore A sono presenti in B" << endl;
    else
       cout << "Non tutti gli elementi del Vettore A sono presenti in B" << endl;
 
        system("PAUSE");  
}
