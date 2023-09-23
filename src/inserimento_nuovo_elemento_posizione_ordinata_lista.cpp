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

void InsOrd(pelem &piniz, int x);

int main() {
    cout << "Programma per la creazione e la stampa di una lista ordinata con " << endl;
    cout << "l'inserimento di un elemento in posizione ordinata" << endl;
    int n;
    cout << "Quanti elementi" << endl;
    cin >> n;
    cout << "Inserimento elementi della lista" << endl;
    pelem lista;
    CreaLista(lista, n);
    cout << "La lista e'" << endl;
    StampaLista(lista);
    cout << endl;
    cout << "Inserimento elemento in posizione ordinata" << endl;
    cout << "Inserire l'elemento da inserire" << endl;
    int x;
    cin >> x;
    cout << "La lista con l'inserimento dell'elemento " << x << " in posizione ordinata e'" << endl;
    InsOrd(lista, x);
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

void StampaLista(pelem &p) {
    if (p != NULL) {
        cout << p->valore << " ";
        StampaLista(p->succ);
    }
}

void InsOrd(pelem &piniz, int x)  //con uso di un record generatore
{
    pelem paux = new elemento;
    paux->succ = piniz;
    piniz = paux;
    pelem prec = paux;
    paux = paux->succ;
    while (paux != NULL && paux->valore < x) {
        prec = paux;
        paux = paux->succ;
    }
    prec->succ = new elemento;
    prec = prec->succ;
    prec->valore = x;
    prec->succ = paux;

    paux = piniz;
    piniz = piniz->succ;
    delete paux;
}
