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

void InsTesta(pelem &p, int x);

void StampaLista(pelem &p);

//usiamo funzioni ricorsive per le funzioni CreaLista e StampaLista per velocizzare la scrittura del programma
int main() {
    cout << "Programma per la creazione e la stampa di una lista, con inserimento" << endl;
    cout << "di un elemento in testa alla lista" << endl;
    int n;
    cout << "Quanti elementi?" << endl;
    cin >> n;
    cout << "Inserimento elementi della lista" << endl;
    pelem lista;
    CreaLista(lista, n);
    cout << "La lista e' " << endl;
    StampaLista(lista);
    cout << endl << "Inserimento elemento in testa" << endl;
    cout << "Elemento da inserire in testa alla lista?" << endl;
    int x;
    cin >> x;
    InsTesta(lista, x);
    cout << "La lista con il nuovo elemento in testa e'" << endl;
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
