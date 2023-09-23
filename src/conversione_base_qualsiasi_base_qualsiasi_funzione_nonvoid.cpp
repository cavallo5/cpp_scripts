#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int convQ10(string numero, int base) {
    int valore;
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
    return valore;
}


string conv10Q(int numero, int base) {
    int quoziente, restonum;
    quoziente = numero;
    char resto;
    string sequenza = "";
    while (quoziente > 0) {
        restonum = quoziente % base;
        if (restonum < 10)
            resto = restonum + '0';
        else if (restonum > 9 && restonum < 16)
            resto = restonum + 'A' - 10;

        sequenza = resto + sequenza;
        quoziente = quoziente / base;
    }
    return sequenza;
}

int main() {
    int b1, b2;
    string num;

    cout << "Conversione da base qualsiasi a base qualsiasi" << endl;
    cout << "inserire numero da convertire=";
    cin >> num; //numero da convertire
    cout << "base in cui e' espresso il numero=";
    cin >> b1;
    cout << "base di arrivo=";
    cin >> b2;

    cout << "risultato=" << conv10Q(convQ10(num, b1), b2) << endl;


    return 0;
}
