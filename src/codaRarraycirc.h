const int D=10 ;
typedef int vettore[D]; 
struct coda
{
	int front ;   //indice elemento front 
	int last ;   //indice dopo elemento ultimo
	bool vuota;   //coda vuota
	vettore elementi;  //elementi coda
};

coda CreaCoda ()
{
    coda c;
    c.last=0;
    c.front=0;
    c.vuota=true;
    return c;
}

int Front(coda c)
{
     return c.elementi[c.front];
}

void Push(int x, coda & c)
{
     if (c.last==c.front && !c.vuota) 
        cout<<"Coda piena";
     else 
     {
		   c.elementi[c.last]=x;
		   c.last=(c.last+1)%D;
		   c.vuota=false;
     }			
}

void Pop(coda & c)
{
     c.front=(c.front+1)%D;
     if (c.front==c.last) c.vuota=true;
}

bool CodaVuota(coda c)
{
     return (c.vuota);
}

