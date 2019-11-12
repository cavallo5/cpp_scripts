
struct elemento
{
	int valore;		//campo valore
	elemento* succ; 	//campo puntatore al successivo
	elemento* prec;	//campo puntatore al precedente
};
typedef elemento* pelem;

struct lista
{
       pelem primo;
       pelem ultimo;
};

void Inserisci(int x, int pos, lista & l);
void Cancella(int pos, lista & l);
int Accedi(int pos, lista l);
lista Init();
bool ListaVuota(lista l);
void InsTesta(int x, lista & l);
void InsCoda(int x, lista & l);
void CancTesta(lista & l);
void CancCoda(lista & l);
int AccediTesta(lista l);
int AccediCoda(lista l);
int numElementi(lista l);
void Copia(lista l1, lista & l2); 
void CancellaLista(lista & l); 

// bisogna aggiungere l'implemenazione delle funzioni primitive
