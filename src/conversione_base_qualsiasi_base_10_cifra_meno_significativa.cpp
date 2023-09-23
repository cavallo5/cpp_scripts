#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int n, i, valore, base, cifra, potenza;
    cout << "Programma conversione da base qualsiasi a base 10" << endl;
    cout << "Di quante cifre e' composto il numero? ";
    cin >> n;
    cout << endl << "In che base e' espresso il numero? ";
    cin >> base;
    potenza = 1;
    i = 0;
    valore = 0;
    cout << "Inserire le cifre dalla meno significativa" << endl;
    while (i < n) {
        cout << "Inserire la cifra :";
        cin >> cifra;
        valore = valore + cifra * potenza;
        potenza = potenza * base;
        i++;
    }
    cout << "Il numero e' " << valore << endl;

    return 0;
}
