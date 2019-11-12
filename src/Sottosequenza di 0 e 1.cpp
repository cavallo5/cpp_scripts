#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int maxzeri,lseqzeri,maxuni,lsequni,numero;
    cout<<"Programma per il calcolo della più lunga sottosequenza di 0 e 1 in una sequenza di 0 e 1"<<endl;
    maxzeri=0;
    lseqzeri=0;
    maxuni=0;
    lsequni=0;
    cout<<"Inserire il numero"<<endl;
    cin>>numero;
    while (numero==0 || numero==1)
    {
          if(numero==0)
          {
                       lseqzeri=lseqzeri+1;
                       if(lseqzeri>maxzeri)
                       maxzeri=lseqzeri;
                       lsequni=0;
          }else
          {
               lsequni=lsequni+1;
               if(lsequni>maxuni)
               maxuni=lsequni;
               lseqzeri=0;
          }
          cout<<"Inserire il numero"<<endl;
          cin>>numero;
    }
    cout<<"La piu' lunga sottosequenza di 0 e' "<<maxzeri<<endl;
    cout<<"La piu' lunga sottosequenza di 1 e' "<<maxuni<<endl;
    
system("PAUSE");
return 0;
} 
