#include <iostream>
#include <cstdlib>

using namespace std;

struct elemento {
    int valore;    //valore di un elemento
    elemento *succ;    //puntatore all'elemento successivo
};

typedef elemento *pelem;


pelem CreaLista(int n, int i) {
    pelem p;
    if (n > 0) {
        p = new elemento;
        cout << "Inserisci valore " << i << " ";
        cin >> p->valore;
        p->succ = CreaLista(n - 1, i + 1);
    } else p = NULL;
    return p;
}


/*
pelem CreaLista ()
{
      int n;
      cout<<"numero di elementi=";
      cin>>n;
      pelem p=NULL;
      if (n>0)
      {	p = new elemento;
        cout<<"elemento 0=";
	cin >> p->valore;
	pelem p1;
	p1=p;
	for (int i=1;i<n;i++)
	{
                p1->succ=new elemento;
                p1=p1->succ;
                cout<<"elemento "<<i<<"=";
		cin >> p1->valore;
	}
	p1->succ=NULL;
      }
      return p;
}
*/

void StampaLista(pelem p) {
    pelem p1 = p;
    while (p1 != NULL) {
        cout << p1->valore << " ";
        p1 = p1->succ;
    }
    cout << endl;
}

int Trova(pelem piniz, int x) {
    bool trovato = false;
    int posizione = -1;
    pelem p = piniz;
    while (p != NULL && !trovato) {
        posizione++;
        if (p->valore == x)
            trovato = true;
        p = p->succ;
    }
    if (trovato) return posizione;
    else return -1;
}

void InserisciOrd(pelem &piniz, int x) {
    pelem paux = piniz;
    if (piniz == NULL || piniz->valore > x) {
        paux = new elemento;
        paux->valore = x;
        paux->succ = piniz;
        piniz = paux;
    } else {
        pelem prec = piniz;
        while (paux != NULL && paux->valore < x) {
            prec = paux;
            paux = paux->succ;
        }
        prec->succ = new elemento;
        prec = prec->succ;
        prec->valore = x;
        prec->succ = paux;
    }
}

void Trasferisci(pelem &piniz, pelem &pnuova, int x) {
    pelem paux = piniz, prec = piniz, p1;
    pnuova = NULL;

    while (paux != NULL) {
        if (paux->valore > x) {
            if (paux == piniz) {
                piniz = paux->succ;
                p1 = pnuova;
                pnuova = paux;
                pnuova->succ = p1;
                paux = piniz;
            } else {
                prec->succ = paux->succ;
                p1 = pnuova;
                pnuova = paux;
                pnuova->succ = p1;
                paux = prec->succ;
            }
        } else {
            prec = paux;
            paux = paux->succ;
        }
    }
}

void StampaListaInv(pelem p) {
    pelem paux;
    pelem p1 = NULL;
    while (p1 != p) {
        paux = p;
        while (paux->succ != p1) paux = paux->succ;
        p1 = paux;
        cout << p1->valore << " ";
    }
}

int main() {
    int n;
    cout << "n=";
    cin >> n;
    pelem lista = CreaLista(n, 1), l2;
    //InserisciOrd(lista,4);
    //int pos=Trova(lista,5);
    //cout<<"Il valore si trova in posizione "<<pos<<endl;
    //Trasferisci(lista,l2,5);
    StampaLista(lista);
    cout << "La lista con valori in ordine inverso:" << endl;
    StampaListaInv(lista);
    //StampaLista(l2);

    return 0;
}
