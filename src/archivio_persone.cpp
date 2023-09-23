#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

struct indirizzo {
    string via;
    int ncivico;
    string cap;
    string citta;
};
struct data {
    int giorno;
    int mese;
    int anno;
};
struct persona {
    string cognome;
    string nome;
    indirizzo indresidenza;
    data datanascita;
};
typedef persona *gruppo;

void SalvaArchivio(gruppo g, int n);

//salva i dati su un file
void LeggiArchivio(gruppo &g, int &n);

//recupera i dati da un file
void LeggiGruppo(gruppo &g, int &n);

//legge i dati da tastiera
void StampaGruppo(gruppo g, int n);
//stampa i dati sul monitor

int main() {
    gruppo gr;
    int n;
    cout << "Input dati da tastiera - opzione 1" << endl;
    cout << "Input dati da file - opzione 2" << endl;
    int opzione;
    cin >> opzione;
    if (opzione == 1) {
        LeggiGruppo(gr, n);
        SalvaArchivio(gr, n);
    }
    if (opzione == 2) {
        LeggiArchivio(gr, n);
        StampaGruppo(gr, n);
    }

    return 0;
}

void StampaGruppo(persona *g, int n) {
    for (int i = 0; i < n; i++) {
        cout << "persona " << i << endl;
        cout << "cognome=";
        cout << g[i].cognome << endl;
        cout << "nome=";
        cout << g[i].nome << endl;
        cout << "via=";
        cout << g[i].indresidenza.via << endl;
        cout << "numero civico=";
        cout << g[i].indresidenza.ncivico << endl;
        cout << "cap=";
        cout << g[i].indresidenza.cap << endl;
        cout << "citta'=";
        cout << g[i].indresidenza.citta << endl;
        cout << "giorno di nascita=";
        cout << g[i].datanascita.giorno << endl;
        cout << "mese di nascita=";
        cout << g[i].datanascita.mese << endl;
        cout << "anno di nascita=";
        cout << g[i].datanascita.anno << endl;
    }
}

void LeggiGruppo(persona *&g, int &n) {
    cout << "Quante persone ? ";
    cin >> n;
    g = new persona[n];
    for (int i = 0; i < n; i++) {
        cout << "persona " << i << endl;
        cout << "cognome=";
        cin >> g[i].cognome;
        cout << "nome=";
        cin >> g[i].nome;
        cout << "via=";
        cin >> g[i].indresidenza.via;
        cout << "numero civico=";
        cin >> g[i].indresidenza.ncivico;
        cout << "cap=";
        cin >> g[i].indresidenza.cap;
        cout << "citta'=";
        cin >> g[i].indresidenza.citta;
        cout << "giorno di nascita=";
        cin >> g[i].datanascita.giorno;
        cout << "mese di nascita=";
        cin >> g[i].datanascita.mese;
        cout << "anno di nascita=";
        cin >> g[i].datanascita.anno;
    }
}

/*
la struttura dei file utilizzati dalle funzioni
SalvaArchivio e LeggiArchivio � la seguente:
sulla prima riga del file � memorizzato il numero
di persone, a seguire ci sono tutti i dati delle
persone e ogni dato � su una riga diversa
*/
void SalvaArchivio(gruppo g, int n) {
    cout << "Nome del file su cui salvare i dati=";
    char nomefile[12];
    cin >> nomefile;
    fstream archivio;
    archivio.open(nomefile, ios::out);
    archivio << n << endl; //si salva sul file il numero di persone
    for (int i = 0; i < n; i++) {
        archivio << g[i].cognome << endl;
        archivio << g[i].nome << endl;
        archivio << g[i].indresidenza.via << endl;
        archivio << g[i].indresidenza.ncivico << endl;
        archivio << g[i].indresidenza.cap << endl;
        archivio << g[i].indresidenza.citta << endl;
        archivio << g[i].datanascita.giorno << endl;
        archivio << g[i].datanascita.mese << endl;
        archivio << g[i].datanascita.anno << endl;
    }
    archivio.close();
}

void LeggiArchivio(gruppo &g, int &n) {
    cout << "Nome del file da cui leggere i dati=\n";
    char nomefile[12];
    cin >> nomefile;
    fstream archivio;
    archivio.open(nomefile, ios::in);
    archivio >> n; //si recupera dal file il numero di persone
    g = new persona[n];
    for (int i = 0; i < n; i++) {
        archivio >> g[i].cognome;
        archivio >> g[i].nome;
        archivio >> g[i].indresidenza.via;
        archivio >> g[i].indresidenza.ncivico;
        archivio >> g[i].indresidenza.cap;
        archivio >> g[i].indresidenza.citta;
        archivio >> g[i].datanascita.giorno;
        archivio >> g[i].datanascita.mese;
        archivio >> g[i].datanascita.anno;
        i++;
    }
    archivio.close();
}

