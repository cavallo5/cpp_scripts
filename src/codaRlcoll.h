struct record
{
	int valore;		 
	record* succ; 	 
};
typedef record* precord; 
struct coda
{
     precord front;
     precord last;
};

coda CreaCoda ()
{
     coda c;
     c.last=NULL;
     c.front=NULL;
     return c;
}

int Front(coda c)
{
     if (c.front==NULL) cout<<"Coda vuota";
     else return c.front->valore;
}

void Push(int x, coda & c)
{
     precord paux=new record;
     paux->valore=x;
     paux->succ=NULL;
     if (c.last==NULL)
     {
	  c.last=paux ;
	  c.front=paux ;
     }
     else
     {
      c.last->succ=paux;
      c.last=paux ;
     }		
}

void Pop(coda & c)
{
     if (c.front==NULL) cout<<"Coda vuota";
     else 
     {
          if (c.front==c.last) //un solo elemento
          {	
            	delete c.front;
             	c.front=NULL;
              	c.last=NULL;
          }
          else
          {
              	precord paux=c.front;
                c.front=c.front->succ; 
                delete paux ;
          }
     }
}

bool CodaVuota(coda c)
{
		return (c.front==NULL);
}

