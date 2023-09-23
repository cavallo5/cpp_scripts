#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


void convQ10(string numero, int base, int &valore) {
    int cifra;
    int n = numero.size(); //numero di cifre
    int i = 0;
    valore = 0;
    while (i < n) {
        if (numero[i] >= '0' && numero[i] <= '9')
            cifra = numero[i] - '0';
        else if (numero[i] >= 'A' && numero[i] <= 'F')
            cifra = numero[i] - 'A' + 10;
        valore = valore * base + cifra;
        i = i + 1;
    }
}


void conv10Q(int numero, int base, string &sequenza) {
    int quoziente, restonum;
    quoziente = numero;
    char resto;
    sequenza = "";
    while (quoziente > 0) {
        restonum = quoziente % base;
        if (restonum < 10)
            resto = restonum + '0';
        else if (restonum > 9 && restonum < 16)
            resto = restonum + 'A' - 10;

        sequenza = resto + sequenza;
        quoziente = quoziente / base;
    }
}

int main() {
    int b1, b2, ris;
    string num, numconv;

    cout << "Conversione da base qualsiasi a base qualsiasi" << endl;
    cout << "inserire numero da convertire=";
    cin >> num; //numero da convertire
    cout << "base in cui e' espresso il numero=";
    cin >> b1;
    cout << "base di arrivo=";
    cin >> b2;

    convQ10(num, b1, ris);

    conv10Q(ris, b2, numconv);

    cout << "risultato=" << numconv << endl;

    return 0;
}

/*
int main()
{     
      int b,ris;
      string num;
      
      cout<<"Conversione da base qualsiasi a base 10"<<endl;
      cout<<"inserire numero=";     
      cin>>num; //numero da convertire
      cout<<"base in cui e' espresso il numero="; 
      cin>>b;  
      cout<<endl;
      
      convQ10(num,b,ris);
      
      cout<<ris;
      
     system ("PAUSE");
     return 0;
}

int main()
{     
      int num,b;
      string s;
      cout<<"Conversione da base 10 a base qualsiasi"<<endl;
      cout<<"numero in base 10=";     
      cin>>num; //numero da convertire
      cout<<"base di arrivo="; 
      cin>>b;  
      cout<<endl;
      
      conv10Q(num, b, s);
      
      cout<<s;
      
     system ("PAUSE");
     return 0;
}
*/
