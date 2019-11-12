#include<iostream>
#include<cstdlib>
#include<fstream>
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
       int giorno,mese,anno;
};
struct persona
{
       string cognome;
       string nome;
       indirizzo indresidenza;
       data datanascita;
};


typedef persona *gruppo;
void salvaarchivio(gruppo g,int n);
void leggiarchivio(gruppo & g, int & n);
void leggigruppo(gruppo & g, int & n);
void stampagruppo(gruppo g, int n);

int main()
{
    gruppo gr;
    int n;
    cout<<"Input dati da tastiera - opzione 1"<<endl;
    cout<<"Input dati da flie - opzione 2"<<endl;
    int opzione;
    cin>>opzione;
    if(opzione==1)
    {
                  leggigruppo(gr,n);
                  salvaarchivio(gr,n);
    }
    if(opzione==2)
    {
                  leggiarchivio(gr,n);
                  stampagruppo(gr,n);
    }
    
system("PAUSE");
return 0;
}
void leggigruppo(gruppo & g,int & n)
{
     cout<<"Quante persone? "<<endl;
     cin>>n;
     g=new persona[n];
     for(int i=0;i<n;i++)
     {
             cout<<"persona "<<i+1<<endl;
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

void stampagruppo(gruppo g,int n)
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
void salvaarchivio(gruppo g,int n)
{
     cout<<"Nome del file su cui salvare i dati=";
     char nomefile[12];
     cin>>nomefile;
     fstream archivio;
     archivio.open(nomefile,ios::out);
     archivio<<n<<endl;
     for(int i=0;i<n;i++)
     {
             archivio<<g[i].cognome<<endl;
             archivio<<g[i].nome<<endl;
             archivio<<g[i].indresidenza.via<<endl;
             archivio<<g[i].indresidenza.ncivico<<endl;
             archivio<<g[i].indresidenza.cap<<endl;
             archivio<<g[i].indresidenza.citta<<endl;
             archivio<<g[i].datanascita.giorno<<endl;
             archivio<<g[i].datanascita.mese<<endl;
             archivio<<g[i].datanascita.anno<<endl;
     }
     archivio.close();
}
void leggiarchivio(gruppo & g, int & n)
{
     cout<<"Nome del file da cui leggere i dati=";
     char nomefile[12];
     cin>>nomefile;
     fstream archivio;
     archivio.open(nomefile,ios::in);
     archivio>>n;
     g=new persona[n];
     for(int i=0;i<n;i++)
     {
             archivio>>g[i].cognome;
             archivio>>g[i].nome;
             archivio>>g[i].indresidenza.via;
             archivio>>g[i].indresidenza.ncivico;
             archivio>>g[i].indresidenza.cap;
             archivio>>g[i].indresidenza.citta;
             archivio>>g[i].datanascita.giorno;
             archivio>>g[i].datanascita.mese;
             archivio>>g[i].datanascita.anno;
     }
     archivio.close();
}
