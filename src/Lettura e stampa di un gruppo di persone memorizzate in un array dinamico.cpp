#include<iostream>
#include<cstdlib>
#include<string>
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

//prototipi funzioni
void LeggiGruppo(persona* & g,int & n);
void StampaGruppo(persona* g,int n);

int main()
{
    int n;
    persona* gruppo; //puntatore a persona
    LeggiGruppo(gruppo,n);
    StampaGruppo(gruppo,n);
    
system("PAUSE");
return 0;
}

void LeggiGruppo(persona* & g,int & n)
{
     cout<<"Quante persone"<<endl;
     cin>>n;
     g=new persona[n];
     for(int i=0;i<n;i++)
     {
             cout<<"persona "<<i<<endl;
             cout<<"cognome=";
             cin>>g[i].cognome;
             cout<<"nome=";
             cin>>g[i].nome;
             cout<<"via=";
             cin>>g[i].indresidenza.via;
             cout<<"numero civico=";
             cin>>g[i].indresidenza.ncivico;
             cout<<"cap=";
             cin>>g[i].indresidenza.cap;
             cout<<"citta'=";
             cin>>g[i].indresidenza.citta;
             cout<<"giorno di nascita=";
             cin>>g[i].datanascita.giorno;
             cout<<"mese di nascita=";
             cin>>g[i].datanascita.mese;
             cout<<"anno di nascita=";
             cin>>g[i].datanascita.anno;
     }
}
void StampaGruppo(persona* g,int n)
{
     for(int i=0;i<n;i++)
     {
             cout<<"persona "<<i<<endl;
             cout<<"cognome=";
             cout<<g[i].cognome<<endl;
             cout<<"nome=";
             cout<<g[i].nome<<endl;
             cout<<"via=";
             cout<<g[i].indresidenza.via<<endl;
             cout<<"numero civico=";
             cout<<g[i].indresidenza.ncivico<<endl;
             cout<<"cap=";
             cout<<g[i].indresidenza.cap<<endl;
             cout<<"citta'=";
             cout<<g[i].indresidenza.citta<<endl;
             cout<<"giorno di nascita=";
             cout<<g[i].datanascita.giorno<<endl;
             cout<<"mese di nascita=";
             cout<<g[i].datanascita.mese<<endl;
             cout<<"anno di nascita=";
             cout<<g[i].datanascita.anno<<endl;
     }
}
