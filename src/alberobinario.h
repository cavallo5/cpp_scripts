struct nodo
{	int valore;	//valore di un nodo
	nodo* sx;	//puntatore al figlio sinistro
	nodo* dx;	//puntatore al figlio destro
};
typedef nodo* albero;
  
int Accedi(albero t)
{
    return t->valore;
}

albero FiglioSx(albero t)
{
       return t->sx;
}

albero FiglioDx(albero t)
{
       return t->dx;
}

bool Vuoto(albero t)
{
     return (t==NULL);
}

albero CreaFoglia(int valore)
{
       nodo* temp=new nodo;
       temp->valore=valore;
       temp->sx=NULL;
       temp->dx=NULL;
       return temp;
}

void CancellaFoglia(albero & t)
{
     delete t;
     t=NULL;
}

void InserisciSottoAlberoSx(albero pos_alb, albero s_alb)
{
     pos_alb->sx=s_alb;
}

void InserisciSottoAlberoDx(albero pos_alb, albero s_alb)
{
     pos_alb->dx=s_alb;
}

void CancellaSottoAlberoSx(albero pos_alb)
{
     delete pos_alb->sx;
     pos_alb->sx=NULL;
}
void CancellaSottoAlberoDx(albero pos_alb)
{
     delete pos_alb->dx;
     pos_alb->dx=NULL;
}

void Genitore(albero pos_alb, albero t, albero & pos_gen)
{
       if (!Vuoto(t))
       { 
        if (FiglioSx(t)==pos_alb || FiglioDx(t)==pos_alb)
           pos_gen=t;
        Genitore(pos_alb,FiglioSx(t),pos_gen);
        Genitore(pos_alb,FiglioDx(t),pos_gen);
       }
}

