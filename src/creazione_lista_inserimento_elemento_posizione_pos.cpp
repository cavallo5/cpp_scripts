#include<iostream>
#include<cstdlib>

using namespace std;

struct elemento {
    int valore;
    elemento *succ;
};
typedef elemento *pelem;

//prototipi funzioni
void CreaLista(pelem &p, int n);

void InsPos(pelem &piniz, int x, int pos);

void InsTesta(pelem &p, int x);

void StampaLista(pelem &p);
//usiamo funzioni ricorsive per le funzioni CreaLista e StampaLista per velocizzare la scrittura del programma

int main() {
    cout << "Programma per la creazione e la stampa di una lista con inserimento" << endl;
    cout << "di un elemento in posizione scelta dall'utente alla lista" << endl;
    int n;
    cout << "Quanti elementi?" << endl;
    cin >> n;
    cout << "Inserimento elementi della lista" << endl;
    pelem lista;
    CreaLista(lista, n);
    cout << "La lista e'" << endl;
    StampaLista(lista);
    cout << endl << "Inserimento elemento nella lista" << endl;
    cout << "Posizione in cui inserire l'elemento?" << endl;
    int pos;
    cin >> pos;
    cout << "Elemento da inserire in posizione " << pos << " alla lista?" << endl;
    int x;
    cin >> x;
    InsPos(lista, x, pos);
    cout << "La lista con il nuovo elemento inserito e'" << endl;
    StampaLista(lista);
    cout << endl;

    return 0;
}

void CreaLista(pelem &p, int n) {
    if (n > 0) {
        p = new elemento;
        cin >> p->valore;
        CreaLista(p->succ, n - 1);
    } else {
        p = NULL;
    }
}

void InsPos(pelem &piniz, int x, int pos) {
    if (pos == 0) {
        InsTesta(piniz, x);
    } else {
        pelem p = piniz;
        for (int i = 0; p != NULL && i < (pos - 1); i++) {
            p = p->succ;
        }
        if (p != NULL) {
            pelem paux;
            paux = p->succ;
            p->succ = new elemento;
            p = p->succ;
            p->valore = x;
            p->succ = paux;
        } else {
            cout << pos << " Troppo grande" << endl;;
        }
    }
}

void InsTesta(pelem &p, int x) {
    pelem p1 = new elemento;
    p1->valore = x;
    p1->succ = p;
    p = p1;
}

void StampaLista(pelem &p) {
    if (p != NULL) {
        cout << p->valore << " ";
        StampaLista(p->succ);
    }
}
