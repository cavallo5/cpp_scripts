#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,valore;
    int *vettore;
    cout<<"Inserire la dimensione del vettore "<<endl;
    cin>>n;
    vettore=new int [n];
    for(int i=0;i<n;i++)
    {
           do{
                        cout<<"Inserire l'elemento "<<i+1<<" del vettore"<<endl;
                        cin>>valore;
             }while(valore<0 || valore>4);
           vettore[i]=valore;
    }
    int lseq=0;
    int maxseq=0;
    for(int i=0;i<n;i++)
    {
            if(vettore[i]==1)
            {
                             lseq++;
            }else
            {
                 if(lseq>maxseq)
                   maxseq=lseq;
                 lseq=0;
            }
    }
    if(lseq>maxseq)
    maxseq=lseq;
    cout<<"Il vettore "<<endl;
    for(int i=0;i<n;i++)
    {
            cout<<"Elemento "<<i+1<<" "<<vettore[i]<<endl;  
    }
    cout<<"La piu' lunga sottosequenza di 1 consecutivi vale "<<maxseq<<endl;

system("PAUSE");
return 0;
}
