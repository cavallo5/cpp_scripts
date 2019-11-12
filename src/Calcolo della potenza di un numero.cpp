#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int base,esponente,potenza,iterazionifatte;
    cout<<"Programma per il calcolo della potenza di un numero"<<endl;
    cout<<"Inserisci la base: ";
    cin>>base;
    cout<<"Inserisci l'esponente: ";
    cin>>esponente;
    if(esponente<0)
    cout<<"Errore"<<endl;
    else
    {
        if(base==0 && esponente==0)
        cout<<"Errore"<<endl;
        else
        {
            iterazionifatte=0;
            potenza=1;
            while(iterazionifatte<esponente)
            {
                                            potenza=potenza*base;
                                            iterazionifatte++;
            }
            cout<<"La potenza e' "<<potenza<<endl;
        }
    }
    
    
system("PAUSE");
return 0;
}
