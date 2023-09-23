#include<iostream>
#include<cstdlib>

using namespace std;

struct elemento {
    int valore;
    elemento *succ;
};

typedef elemento *pelem;

//prototipi funzioni
void CreaListaInv(pelem &p, int n);

void StampaLista(pelem p);

int main() {
    cout << "Programma per la creazione di una lista in ordine inverso e stampa" << endl;
    int n;
    cout << "Quanti elementi?" << endl;
    cin >> n;
    pelem lista;
    CreaListaInv(lista, n);
    StampaLista(lista);
    cout << endl;

    return 0;
}

void CreaListaInv(pelem &p, int n) {
    pelem paux;
    p = NULL;
    for (int i = 0; i < n; i++) {
        paux = new elemento;
        cin >> paux->valore;
        paux->succ = p;
        p = paux;
    }
}

void StampaLista(pelem p) {
    pelem p1 = p;
    while (p1 != NULL) {
        cout << p1->valore;
        p1 = p1->succ;
    }
}
