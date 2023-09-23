#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void ConvBQualsB10(string numero, int base, int &valore) {
    int n = numero.size(); //numero di cifre
    int i = 0;
    valore = 0;
    int cifra;
    while (i < n) {
        cifra = numero[i] - '0';
        valore = valore * base + cifra;
        i = i + 1;
    }
}

void ConvB10BQuals(int numero, int base, string &sequenza) {
    int quoziente = numero;
    char resto;
    sequenza = "";
    while (quoziente > 0) {
        resto = quoziente % base + '0';
        sequenza = resto + sequenza;
        quoziente = quoziente / base;
    }
}

int main() {
    string x, risultato;
    int val10;
    int b1, b2;
    cout << "Inserisci numero da convertire: ";
    cin >> x;
    cout << "Inserisci la base del numero: ";
    cin >> b1;
    cout << "Inserisci la base di arrivo: ";
    cin >> b2;
    ConvBQualsB10(x, b1, val10);

    cout << "valore in base 10 " << val10 << endl;

    ConvB10BQuals(val10, b2, risultato);

    cout << "Il numero convertito e': " << risultato << endl;

    return 0;
}
