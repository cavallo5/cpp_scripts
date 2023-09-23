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

void CancellaPos(pelem &piniz, int pos);

void StampaLista(pelem &p);

void CancTesta(pelem &p);

int main() {
    cout << "Programma per la creazione e la stampa di una lista con " << endl;
    cout << "la cancellazione dell'elemento in posizione scelta dall'utente" << endl;
    int n;
    cout << "Quanti elementi" << endl;
    cin >> n;
    cout << "Inserimento elementi della lista" << endl;
    pelem lista;
    CreaLista(lista, n);
    cout << "La lista e'" << endl;
    StampaLista(lista);
    cout << endl;
    cout << "Cancellazione elemento in posizione da scegliere" << endl;
    int pos;
    cout << "In che posizione cancellare l'elemento?" << endl;
    cin >> pos;
    if (pos == n) {
        cout << pos << " troppo grande" << endl;
    } else {
        CancellaPos(lista, pos);
    }
    cout << "La lista con la cancellazione dell'elemento in posizione " << pos << " e'" << endl;
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

void CancellaPos(pelem &piniz, int pos) {
    if (pos == 0) {
        CancTesta(piniz);
    } else {
        pelem p = piniz;
        for (int i = 0; p != NULL && i < (pos - 1); i++) {
            p = p->succ;
        }
        if (p != NULL) {
            pelem paux;
            paux = p->succ;
            p->succ = paux->succ;
            delete paux;
        } else {
            cout << pos << " troppo grande" << endl;
        }
    }
}

void StampaLista(pelem &p) {
    if (p != NULL) {
        cout << p->valore << " ";
        StampaLista(p->succ);
    }
}

void CancTesta(pelem &p) {
    if (p != NULL) {
        pelem paux = p;
        p = p->succ;
        delete paux;
    }
}
