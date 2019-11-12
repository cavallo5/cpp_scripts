#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int conteggioconsonanti=0, conteggiovocali=0,i=0,n;
    char lettera;
    cout<<"Programma per il calcolo del numero delle consonanti e delle vocali"<<endl;
    cout<<"Inserire il numero di lettere che vuoi inserire: "<<endl;
    cin>>n;
    while (i<n)
    {
          cout<<"Inserire in minuscolo la "<<i<<" lettera"<<endl;
          cin>>lettera;
          switch (lettera)
          {
               case 'a':
               case 'e':
               case 'i':
               case 'o':
               case 'u': conteggiovocali++; break;
               default: conteggioconsonanti++;
          }
          i=i+1;          
    }
    cout<<"Il numero di vocali e': "<<conteggiovocali<<endl;
    cout<<"Il numero di consonanti e': "<<conteggioconsonanti<<endl;

system("PAUSE");
return 0;
}
