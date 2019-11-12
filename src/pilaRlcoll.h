
struct record
{
	int valore;		 
	record* succ; 	 
};
typedef record* pila; 

pila CreaPila()
{
     pila p;
     p=NULL;
     return p;
}

int Top(pila p)
{
		if (p==NULL) cout<<"Pila vuota";
        else  return p->valore;
}

void Push(int x, pila & p)
{
		record* paux=new record;
		paux->valore=x;
        paux->succ=p;
		p=paux;
}

void Pop(pila & p)
{
		if (p==NULL) cout<<"Pila vuota";
        else	
        {
         record* paux=p;
         p=p->succ; 
         delete paux ;
        }
}

bool PilaVuota(pila p)
{
		return (p==NULL);
}

