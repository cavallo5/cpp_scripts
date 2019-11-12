const int D=100 ;
typedef int vettore[D]; 
struct lista
{
	int n ;			    //numero valori lista
	vettore valori; 	//valori lista
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

lista Init()
{
      lista l;
      l.n=0;
      return l;
}

int Accedi(int pos, lista l)
{
    if (pos<0) cout << pos << "negativo";
    else if (pos>l.n) cout << pos << " troppo grande";
    else
       return l.valori[pos];
}

int AccediTesta(lista l)
{
    if (l.n==0) cout << "lista vuota";
    else
     return l.valori[0];
}
 
int AccediCoda(lista l)
{
    if (l.n==0) cout << "lista vuota";
    else
     return l.valori[l.n-1];
}
   
bool ListaVuota(lista l)
{
     return (l.n==0);
}

void Inserisci(int x, int pos, lista & l)
//inserisce un elemento con valore x in posizione pos. pos è compresa tra 0 e n. Per pos =0 abbiamo un inserimento in testa. Per pos=n abbiamo un inserimento in coda. 
{
 
    if (pos<0) cout << pos << "negativo";
    else if (pos>l.n) cout << pos << " troppo grande";
    else
    {
        for (int i=l.n-1;i>=pos;i--)    
		  l.valori[i+1]=l.valori[i];
	    l.valori[pos]=x;  //memorizzazione valore x in posizione p
	    l.n++;
    }
}

void InsTesta(int x, lista & l)
{
     for (int i=l.n-1;i>=0;i--)    
		  l.valori[i+1]=l.valori[i];
	    l.valori[0]=x;  //memorizzazione valore x in posizione 0
	    l.n++;
}

void InsCoda(int x, lista & l)
{
	    l.valori[l.n]=x;  //memorizzazione valore x in posizione l.n
	    l.n++;
}

void Cancella(int pos, lista & l)
{
    if (l.n==0) cout << "lista vuota";
    else
    {
        for (int i=pos;i<l.n-1;i++)    
		  l.valori[i]=l.valori[i+1];
        l.n--;
    }
}

void CancTesta(lista & l)
{
    if (l.n==0) cout << "lista vuota";
    else
    {
        for (int i=0;i<l.n-1;i++)    
		  l.valori[i]=l.valori[i+1];
        l.n--;
    }
}

int numElementi(lista l)
{
    return l.n;
}

void Copia(lista l1, lista & l2)
{
     for (int i=0;i<l1.n;i++)    
         l2.valori[i]=l1.valori[i];
     l2.n=l1.n;
}
     
void CancellaLista(lista & l)
{
     l.n=0;
}

