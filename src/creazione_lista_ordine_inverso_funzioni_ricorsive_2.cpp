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

void StampaListaInv(pelem &p);

int main() {
    cout << "Programma per la creazione e la stampa di una lista con uso" << endl;
    cout << "di funzioni ricorsive" << endl;
    int n;
    cout << "Quanti elementi" << endl;
    cin >> n;
    cout << "Inserimento elementi della lista" << endl;
    pelem lista;
    CreaLista(lista, n);
    cout << "La lista e'" << endl;
    StampaListaInv(lista);
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

void StampaListaInv(pelem &p) {
    if (p != NULL) {
        StampaListaInv(p->succ);
        cout << p->valore << " ";
    }
}
