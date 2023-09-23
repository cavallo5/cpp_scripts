#include<iostream>
#include<cstdlib>

using namespace std;

struct elemento {
    int valore;
    elemento *succ;
};

typedef elemento *pelem;

void CreaLista(pelem &p, int n);

void StampaLista(pelem p);

int main() {
    cout << "Programma per la creazione e la stampa di una lista" << endl;
    int n;
    cout << "Numero di elementi" << endl;
    cin >> n;
    pelem lista;
    CreaLista(lista, n);
    StampaLista(lista);
    cout << endl;

    return 0;
}

void CreaLista(pelem &p, int n) {
    p = new elemento;
    cout << "elemento 0=";
    cin >> p->valore;
    pelem p1;
    p1 = p;
    for (int i = 1; i < n; i++) {
        p1->succ = new elemento;
        p1 = p1->succ;
        cout << "elemento " << i << "=";
        cin >> p1->valore;
    }
    p1->succ = NULL;
}

void StampaLista(pelem p) {
    pelem p1 = p;
    while (p1 != NULL) {
        cout << p1->valore << " ";
        p1 = p1->succ;
    }
}
