const int D=10 ;
typedef int vettore[D]; 
struct coda
{
	int front ;   //indice elemento front 
	int last ;   //indice elemento ultimo
	vettore elementi;  //elementi coda
};

coda CreaCoda ()
{
		coda c;
		c.last=-1;
        c.front=0;
        return c;
}

int Front(coda c)
{
		return c.elementi[c.front];
}

void Push(int x, coda & c)
{
     if (c.last==D-1 && c.front==0) 
        cout<<"Coda piena";
     else 
     {
          if (c.last==D-1) //traslazione
          {
			for (int i=c.front;i<=c.last;i++)
				c.elementi[i-c.front]=c.elementi[i];
			c.last=c.last-c.front; 
            c.front=0;
          }
          c.elementi[c.last+1]=x;
          c.last++;
      }			
}

void Pop(coda & c)
{
		c.front++;
}

bool CodaVuota(coda c)
{
		return (c.last<c.front);
}

