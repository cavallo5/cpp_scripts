#include<iostream>
#include<cstdlib>
using namespace std;

struct indirizzo
{
       string via;
       int ncivico;
       string cap;
       string citta;
};
struct data
{
       int giorno;
       int mese;
       int anno;
};
struct persona
{
       string cognome;
       string nome;
       indirizzo indresidenza;
       data datanascita;
};

int main()
{
    cout<<"Programma che permette di inserire i dati di una persona "<<endl;
    persona p;
    cout<<"Cognome=";
    cin>>p.cognome;
    cout<<"Nome=";
    cin>>p.nome;
    cout<<"Via=";
    cin>>p.indresidenza.via;
    cout<<"Numero civico=";
    cin>>p.indresidenza.ncivico;
    cout<<"Cap=";
    cin>>p.indresidenza.cap;
    cout<<"Citta'=";
    cin>>p.indresidenza.citta;
    cout<<"Giorno di nascita=";
    cin>>p.datanascita.giorno;
    cout<<"Mese di nascita=";
    cin>>p.datanascita.mese;
    cout<<"Anno di nascita=";
    cin>>p.datanascita.anno;
    
    
system("PAUSE");
return 0;
}
