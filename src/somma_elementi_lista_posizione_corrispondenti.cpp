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

void SommaValoriCorrisp(pelem p1, pelem p2, pelem &p3);


int main() {
    cout << "Programma per la creazione e la stampa di due liste " << endl;
    cout << "e creazione di una terza lista che contenga la somma " << endl;
    cout << "degli elementi in posizioni corrispondenti" << endl;
    int n;
    cout << "Quanti elementi della lista 1" << endl;
    cin >> n;
    cout << "Inserimento elementi della lista 1" << endl;
    pelem lista1;
    CreaLista(lista1, n);
    cout << "La lista 1 e'" << endl;
    StampaLista(lista1);
    cout << endl;
    int m;
    cout << "Quanti elementi della lista 2" << endl;
    cin >> m;
    cout << "Inserimento elementi della lista 2" << endl;
    pelem lista2;
    CreaLista(lista2, m);
    cout << "La lista 2 e'" << endl;
    StampaLista(lista2);
    cout << endl;
    pelem lista3;
    SommaValoriCorrisp(lista1, lista2, lista3);
    cout << "La lista che contiene la somma degli elementi in posizioni corrispondenti e'" << endl;
    StampaLista(lista3);
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

void SommaValoriCorrisp(pelem p1, pelem p2, pelem &p3) {
    pelem paux1 = p1;
    pelem paux2 = p2;
    p3 = new elemento;
    p3->succ = NULL;
    pelem paux3 = p3;

    while (paux1 != NULL && paux2 != NULL) {
        paux3->succ = new elemento;
        paux3 = paux3->succ;
        paux3->valore = paux1->valore + paux2->valore;
        paux1 = paux1->succ;
        paux2 = paux2->succ;
    }

    pelem paux4;
    if (paux1 == NULL) paux4 = paux2;
    else paux4 = paux1;

    while (paux4 != NULL) {
        paux3->succ = new elemento;
        paux3 = paux3->succ;
        paux3->valore = paux4->valore;
        paux4 = paux4->succ;
    }

    paux3->succ = NULL;

    paux3 = p3;
    p3 = p3->succ;
    delete paux3;
}
