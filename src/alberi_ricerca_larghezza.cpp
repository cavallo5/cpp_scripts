#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


struct nodo {
    int valore;    //valore di un nodo
    nodo *sx;    //puntatore al figlio sinistro
    nodo *dx;    //puntatore al figlio destro
};
typedef nodo *albero;

typedef nodo *elemento;
struct record {
    elemento valore;
    record *succ;
};
typedef record *precord;
struct coda {
    precord front;
    precord last;
};

coda CreaCoda() {
    coda c;
    c.last = NULL;
    c.front = NULL;
    return c;
}

elemento Front(coda c) {
    if (c.front == NULL) cout << "Coda vuota";
    else return c.front->valore;
}

void Push(elemento x, coda &c) {
    precord paux = new record;
    paux->valore = x;
    paux->succ = NULL;
    if (c.last == NULL) {
        c.last = paux;
        c.front = paux;
    } else {
        c.last->succ = paux;
        c.last = paux;
    }
}

void Pop(coda &c) {
    if (c.front == NULL) cout << "Coda vuota";
    else {
        if (c.front == c.last) //un solo elemento
        {
            delete c.front;
            c.front = NULL;
            c.last = NULL;
        } else {
            precord paux = c.front;
            c.front = c.front->succ;
            delete paux;
        }
    }
}

bool CodaVuota(coda c) {
    return (c.front == NULL);
}


int Accedi(albero t) {
    return t->valore;
}

albero FiglioSx(albero t) {
    return t->sx;
}

albero FiglioDx(albero t) {
    return t->dx;
}

bool Vuoto(albero t) {
    return (t == NULL);
}

albero CreaFoglia(int valore) {
    nodo *temp = new nodo;
    temp->valore = valore;
    temp->sx = NULL;
    temp->dx = NULL;
    return temp;
}

void CancellaFoglia(albero &t) {
    delete t;
    t = NULL;
}

void InserisciSottoAlberoSx(albero pos_alb, albero s_alb) {
    pos_alb->sx = s_alb;
}

void InserisciSottoAlberoDx(albero pos_alb, albero s_alb) {
    pos_alb->dx = s_alb;
}

void CancellaSottoAlberoSx(albero pos_alb) {
    delete pos_alb->sx;
    pos_alb->sx = NULL;
}

void CancellaSottoAlberoDx(albero pos_alb) {
    delete pos_alb->dx;
    pos_alb->dx = NULL;
}

void Genitore(albero pos_alb, albero t, albero &pos_gen) {
    if (!Vuoto(t)) {
        if (FiglioSx(t) == pos_alb || FiglioDx(t) == pos_alb)
            pos_gen = t;
        Genitore(pos_alb, FiglioSx(t), pos_gen);
        Genitore(pos_alb, FiglioDx(t), pos_gen);
    }
}

void CancellaAlbero(albero t) {
    if (!Vuoto(t)) {
        CancellaAlbero(FiglioSx(t));
        CancellaAlbero(FiglioDx(t));
        CancellaFoglia(t);
    }
}


bool conferma() {
    char ch;
    do
        cin >> ch;
    while (ch != 'S' && ch != 'N');
    return (ch == 'S');
}

albero LeggiAlberoOrdineAnticipato() {
    int val;
    cout << "valore nodo";
    cin >> val;
    albero t = CreaFoglia(val);
    cout << "vuoi inserire figlio sx del nodo " << val << " ? (S/N) ";
    if (conferma())
        InserisciSottoAlberoSx(t, LeggiAlberoOrdineAnticipato());
    cout << "vuoi inserire figlio dx del nodo " << val << " ? (S/N) ";
    if (conferma())
        InserisciSottoAlberoDx(t, LeggiAlberoOrdineAnticipato());
    return t;
}

albero LeggiAlbero() {
    albero t;
    t = CreaFoglia(0);
    albero t1;
    t1 = CreaFoglia(1);
    InserisciSottoAlberoSx(t, t1);
    t1 = CreaFoglia(2);
    InserisciSottoAlberoDx(t, t1);
    t1 = CreaFoglia(3);
    InserisciSottoAlberoSx(FiglioSx(t), t1);
    t1 = CreaFoglia(4);
    InserisciSottoAlberoDx(FiglioSx(t), t1);
    t1 = CreaFoglia(5);
    InserisciSottoAlberoSx(FiglioDx(t), t1);
    t1 = CreaFoglia(6);
    InserisciSottoAlberoDx(FiglioDx(t), t1);
    return t;
}


void VisitaLarghezza(albero t) {
    coda c = CreaCoda();
    Push(t, c);
    albero t1;
    while (!CodaVuota(c)) {
        t1 = Front(c);
        cout << Accedi(t1) << " ";
        if (!Vuoto(FiglioSx(t1)))
            Push(FiglioSx(t1), c);
        if (!Vuoto(FiglioDx(t1)))
            Push(FiglioDx(t1), c);
        Pop(c);
    }
}

void VisitaOrdineAnticipato(albero t) {
    if (!Vuoto(t)) {
        cout << Accedi(t) << " ";
        VisitaOrdineAnticipato(FiglioSx(t));
        VisitaOrdineAnticipato(FiglioDx(t));
    }
}

void VisitaOrdineCentrale(albero t) {
    if (!Vuoto(t)) {
        VisitaOrdineCentrale(FiglioSx(t));
        cout << Accedi(t) << " ";
        VisitaOrdineCentrale(FiglioDx(t));
    }
}

void VisitaOrdinePosticipato(albero t) {
    if (!Vuoto(t)) {
        VisitaOrdinePosticipato(FiglioSx(t));
        VisitaOrdinePosticipato(FiglioDx(t));
        cout << Accedi(t) << " ";
    }
}


int main() {
    albero t = LeggiAlberoOrdineAnticipato();


/*  
    albero t1=FiglioSx(FiglioDx(t));
    albero gen;
    Genitore(t1,t,gen);  
    cout<<Accedi(gen);
*/

    cout << "visita larghezza:";
    VisitaLarghezza(t);
    cout << endl;
    cout << "ordine anticipato:";
    VisitaOrdineAnticipato(t);
    cout << endl;
    cout << "ordine centrale:";
    VisitaOrdineCentrale(t);
    cout << endl;
    cout << "ordine posticipato:";
    VisitaOrdinePosticipato(t);

    CancellaAlbero(t);
    cout << endl;


    system("PAUSE");
    return 0;

}

 
