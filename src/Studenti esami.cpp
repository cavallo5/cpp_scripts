#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct data
{
      int giorno;
      int mese;
      int anno;
};

struct esame
{
      string nome;
      int voto;
};

struct studente
{
      string nome;
      string cognome;
      string matricola;
      data dataNascita;
      int numEsami;
      esame* esamiSuperati;
};

void LetturaStudenti(studente* & gruppo, int n);
void StampaStudenti(studente* gruppo, int n);

int main()
{
      int n;
      studente* g;
      cout<<"numero di studenti ="; 
      cin>>n;
      LetturaStudenti(g,n);
      StampaStudenti(g,n);
      system("PAUSE");
      return 0;
}

void LetturaStudenti(studente* & gruppo, int n)
{
      int v;
      gruppo=new studente[n];
      for (int i=0; i<n; i++)
      {
          cout<<"studente "<<i+1<<endl;
          cout<<"cognome=";
          cin>>gruppo[i].cognome;
          cout<<"nome=";
          cin>>gruppo[i].nome;
          cout<<"matricola=";
          cin>>gruppo[i].matricola;
          cout<<"giorno di nascita=";
          cin>>gruppo[i].dataNascita.giorno;
          cout<<"mese di nascita=";
          cin>>gruppo[i].dataNascita.mese;
          cout<<"anno di nascita=";
          cin>>gruppo[i].dataNascita.anno;
          cout<<"numero esami sostenuti=";
          cin>>gruppo[i].numEsami;
          v=gruppo[i].numEsami;
          gruppo[i].esamiSuperati = new esame[v];
          for (int j=0; j<v; j++)
          {
            cout<<"esame n. "<<j+1<<endl;           
            cout<<"nome esame=";
            cin>>gruppo[i].esamiSuperati[j].nome;
            cout<<"voto=";
            cin>>gruppo[i].esamiSuperati[j].voto;
          }
      }
}

void StampaStudenti(studente* gruppo, int n)
{
      int v;
      for (int i=0; i<n; i++)
      {
          cout<<"studente "<<i+1<<endl;
          cout<<"cognome=";
          cout<<gruppo[i].cognome<<endl;
          cout<<"nome=";
          cout<<gruppo[i].nome<<endl;
          cout<<"matricola=";
          cout<<gruppo[i].matricola<<endl;
          cout<<"giorno di nascita=";
          cout<<gruppo[i].dataNascita.giorno<<endl;
          cout<<"mese di nascita=";
          cout<<gruppo[i].dataNascita.mese<<endl;
          cout<<"anno di nascita=";
          cout<<gruppo[i].dataNascita.anno<<endl;
          cout<<"numero esami sostenuti=";
          cout<<gruppo[i].numEsami<<endl;
          v=gruppo[i].numEsami;
          for (int j=0; j<v; j++)
          {
            cout<<"esame n. "<<j+1<<endl;           
            cout<<"nome esame=";
            cout<<gruppo[i].esamiSuperati[j].nome<<endl;
            cout<<"voto=";
            cout<<gruppo[i].esamiSuperati[j].voto<<endl;
          }
      }
}
