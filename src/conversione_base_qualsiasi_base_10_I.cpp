#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    cout << "Conversione da base qualsiasi a base 10" << endl;
    int n, i, base, potenza, valore, cifra;
    cout << "Inserire il numero di cifre del numero da convertire ";
    cin >> n; //numero di cifre
    cout << "Inserire la base in cui e' espresso il numero da convertire ";
    cin >> base;
    i = 1;
    potenza = 1;
    valore = 0;
    cout << "Inserire le cifre a partire dalla meno significativa" << endl;

    while (i <= n) {
        cout << "Cifra " << i << " =";
        cin >> cifra; //lettura cifre a partire dalla meno significativa
        valore = valore + cifra * potenza;
        potenza = potenza * base;
        i = i + 1;
    }
    cout << "Il numero in base 10 e' ";
    cout << valore << endl;

    return 0;
}
