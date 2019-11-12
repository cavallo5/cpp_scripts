const int D=100 ;
typedef int vettore[D]; 
struct pila
{
	int top ;	//indice elemento top, se -1 pila vuota
	vettore elementi;  //elementi pila
};

pila CreaPila()
{
		pila p;
		p.top=-1;
		return p;
}

int Top(pila p)
{
		if (p.top==-1) cout<<"Pila vuota";
        else return p.elementi[p.top];
}

void Push(int x, pila & p)
{
		if (p.top==D-1) 
           cout<<"Pila piena";
        else 
        {
          p.elementi[p.top+1]=x;
          p.top++;
        }
}

void Pop(pila & p)
{
		if (p.top==-1) cout<<"Pila vuota";
        else p.top--;
}

bool PilaVuota(pila p)
{
		return (p.top==-1);
}

