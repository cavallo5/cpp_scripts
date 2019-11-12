#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void convParteFraz(float numero, int base, string & seq)
{
 const int precmax=20;
 int parteint;
 int precisione=1;
 char car;
 seq=".";
 while (numero!=0 && precisione<precmax)
 {
       numero=numero*base;
       parteint=numero;
       // la if seguente gestisce basi maggiori di 10 fino alla base 16
            if (parteint>=10)
            {
                if (parteint==10) car='A';
                else if (parteint==11) car='B';
                else if (parteint==12) car='C';
                else if (parteint==13) car='D';
                else if (parteint==14) car='E';
                else if (parteint==15) car='F';
                seq=seq+car;
            }
            else
            {
                car=parteint+'0';
                seq=seq+car;
            }
            numero=numero-parteint;
            precisione++;
      }
}

void ConvB10BQuals(int numero,int base,string & sequenza)
{
  int quoziente=numero;
  char resto;
  sequenza="";
  while (quoziente>0)
  {
	resto = quoziente % base+'0';
	sequenza=resto+sequenza;
	quoziente=quoziente/base;
  }
}

int main()
{
      float x,pf;
      int pi;
      int b;
      string risultato,risParteInt;
      cout<<"Inserisci numero da convertire: ";
      cin>>x;
      cout<<"Inserisci la base di arrivo: ";
      cin>>b;
      pi=x;
      pf=x-pi;
      ConvB10BQuals(pi, b, risParteInt);
      convParteFraz(pf, b, risultato);
      
      risultato=risParteInt+risultato;
      cout<<"Il numero convertito e': "<<risultato<<endl;

      system("PAUSE");
      return 0;
}

