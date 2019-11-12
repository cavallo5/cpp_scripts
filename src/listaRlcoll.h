struct elemento
{
	int valore;		//campo valore
	elemento* succ; 	//campo puntatore al successivo
};
typedef elemento* lista;

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
      l=NULL;
      return l;
}

int Accedi(int pos, lista l)
{
  if (pos<0) cout << pos << "negativo";
  else
  if (pos==0)  
  {
     return l->valore;
  }
  else
  {  
	elemento* p=l ;
	for (int i=0 ; p!=NULL && i<pos; i++)
 		p=p->succ;
	if (p!=NULL)
	{
       return p->valore;
	}
	else cout << pos << "troppo grande";
   }
}

int AccediTesta(lista l)
{
    if (l==NULL) cout << "lista vuota";
    else
     return l->valore;
}
    
int AccediCoda(lista l)
{
if (l==NULL)  //lista nulla
      cout << "lista vuota";
else
{	
   elemento* paux;
   paux=l;
   while (paux->succ!=NULL) 	
        paux=paux->succ;
   return paux->valore;
    
}
}

bool ListaVuota(lista l)
{
     return (l==NULL);
}

void Inserisci(int x, int pos, lista & l)
//inserisce un elemento con valore x in posizione pos. pos è compresa tra 0 e n. Per pos =0 abbiamo un inserimento in testa. Per pos=n abbiamo un inserimento in coda. 
{
	if (pos<0) cout << pos << "negativo";
    else
        if (pos==0)  
        {
           elemento* p1=new elemento;
           p1->valore=x;
           p1->succ=l;
           l=p1;
        }
	    else
        { 
          elemento* p=l ;
	      for (int i=0 ; p!=NULL && i<(pos-1); i++)
 		      p=p->succ;
          if (p!=NULL)
	      {
             elemento* paux;
             paux=p->succ;
             p->succ=new elemento ;
             p=p->succ;
             p->valore=x ;
             p->succ=paux ;
          }
	      else cout << pos << "troppo grande";
         }
}


void InsTesta(int x, lista & l)
{
    elemento* p1=new elemento;
    p1->valore=x;
    p1->succ=l;
    l=p1;  
}

void InsCoda(int x, lista & l)
{
if (l==NULL)  //lista nulla
{	
        l=new elemento;
		l->valore=x;
		l->succ=NULL;
}
else
{	
   elemento* paux;
   paux=l;
   while (paux->succ!=NULL) 	
        paux=paux->succ;
   paux->succ=new elemento;
   paux=paux->succ;
   paux->valore=x;
   paux->succ=NULL;
}
}

void CancTesta(lista & l)
{
if (l!=NULL)
{	
        elemento* paux=l;
		l=l->succ;
		delete paux;
}
}

void Cancella(int pos, lista & l)
//cancella l' elemento in posizione pos. pos è compresa tra 0 e n-1. Per pos =0 abbiamo la cancellazione in testa. Per pos=n-1 abbiamo la cancellazione in coda. 
{
    if (l==NULL) cout << "lista vuota";
    else 
	     if (pos<0) cout << pos << "negativo";
         else
         if (pos==0)  
         {
            elemento* p1=l;
            l=l->succ;
            delete p1;
         }
	     else
         { 
	       elemento* p=l ;
	       for (int i=0 ; p!=NULL && i<(pos-1); i++)
 		   p=p->succ;
	       if (p!=NULL)
	       {
            elemento* paux;
            paux=p->succ;
            p->succ=paux->succ ;
            delete paux;
           }
	       else cout << pos << "troppo grande";
         }
}

int numElementi(lista l)
{
    int i=0;
    while (l!=NULL)
    {
          l=l->succ;
          i++;
    }
    return i;
}


void Copia(lista l1, lista & l2)
{
    if (l1==NULL) l2=NULL;
    else
    {
	  l2 = new elemento;
      l2->valore=l1->valore;
	  elemento *p1=l1->succ, *p2=l2;
	  while (p1!=NULL)
	  {
          p2->succ=new elemento;
          p2=p2->succ;
		  p2->valore=p1->valore;
		  p1=p1->succ;
      }
	  p2->succ=NULL;
    }
}

void CancellaLista(lista & l)
{
     elemento *p=l;
     while (l!=NULL)
     {
           l=l->succ;
           delete p;
           p=l;
     }
}

