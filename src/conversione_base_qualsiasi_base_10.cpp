#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int n, base, valore, i, potenza, cifra;
    cout << "Conversione da base qualsiasi a base 10" << endl;
    cout << "Inserire il numero di cifre del numero da convertire: " << endl;
    cin >> n;
    cout << "Inserire la base in cui è espresso il numero da convertire: " << endl;
    cin >> base;
    i = 1;
    potenza = 1;
    valore = 0;
    while (i <= n) {
        cout << "Inserire la " << i << " cifra:" << endl;
        cin >> cifra;
        valore = valore + cifra * potenza;
        potenza = potenza * base;
        i++;
    }
    cout << "Il risultato e': " << valore << endl;


    return 0;
}
