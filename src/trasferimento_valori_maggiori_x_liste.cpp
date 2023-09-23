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

void StampaLista(pelem &p);

void Trasf(pelem &piniz, pelem &p2, int x);

int main() {
    cout << "Programma per la creazione e la stampa di una lista con " << endl;
    cout << "il trasferimento,scelto un valore x,dei valori minori di x in una lista" << endl;
    cout << "e i valori maggiori di x in una seconda lista in ordine inverso" << endl;

    int n;
    cout << "Quanti elementi" << endl;
    cin >> n;
    cout << "Inserimento elementi della lista" << endl;
    pelem lista1;
    pelem lista2;
    CreaLista(lista1, n);
    cout << "La lista e'" << endl;
    StampaLista(lista1);
    cout << endl;
    cout << "Trasferimento valori" << endl;
    cout << "Inserire il valore" << endl;
    int x;
    cin >> x;
    Trasf(lista1, lista2, x);
    cout << "La lista con i valori minori di " << x << " e'" << endl;
    StampaLista(lista1);
    cout << "La lista in ordine inverso con i valori maggiori di " << x << " e'" << endl;
    StampaLista(lista2);
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

void StampaLista(pelem &p) {
    if (p != NULL) {
        cout << p->valore << " ";
        StampaLista(p->succ);
    }
}

void Trasf(pelem &piniz, pelem &p2, int x) {
    pelem paux = new elemento;
    paux->succ = piniz;
    piniz = paux;
    pelem prec = piniz;
    paux = paux->succ;
    p2 = NULL;
    while (paux != NULL) {
        if (paux->valore > x) {
            prec->succ = paux->succ;
            paux->succ = p2;
            p2 = paux;
            paux = prec->succ;
        } else {
            prec = paux;
            paux = paux->succ;
        }
    }
    paux = piniz;
    piniz = piniz->succ;
    delete paux;
}
