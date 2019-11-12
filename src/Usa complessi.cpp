
#include "complesso.h"
int main()
{
	complesso a,b,c;
	cout<<"Inserire il primo numero complesso"<<endl;
    a=LeggiC();
	cout<<"Inserire il secondo numero complesso"<<endl;
	b=LeggiC();
	c=Somma(a,b);
	cout<<"La loro somma e':"<<endl;
	ScriviC(c);
	c=Prodotto(a,b);
	cout<<"Il loro prodotto e':"<<endl;
	ScriviC(c);
	system("PAUSE");
	return 0;
}
