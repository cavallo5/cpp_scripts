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

void CancTesta(pelem &p);

void StampaLista(pelem &p);

int main() {
    cout << "Programma per la creazione e la stampa di una lista con " << endl;
    cout << "la cancellazione dell'elemento in testa" << endl;
    int n;
    cout << "Quanti elementi" << endl;
    cin >> n;
    cout << "Inserimento elementi della lista" << endl;
    pelem lista;
    CreaLista(lista, n);
    cout << "La lista e'" << endl;
    StampaLista(lista);
    cout << endl;
    cout << "Cancellazione elemento in testa" << endl;
    CancTesta(lista);
    cout << "La lista con la cancellazione dell'elemento in testa e'" << endl;
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

void CancTesta(pelem &p) {
    if (p != NULL) {
        pelem paux = p;
        p = p->succ;
        delete paux;
    }
}

void StampaLista(pelem &p) {
    if (p != NULL) {
        cout << p->valore << " ";
        StampaLista(p->succ);
    }
}
