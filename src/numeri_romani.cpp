#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n, valore, i, ris;
    char ch;
    i = 1;
    ris = 0;
    cout << "NUMERI ROMANI" << endl << endl;
    cout << "Di quante cifre e' composto il numero?" << endl;
    cin >> n;
    while (i <= n) {
        cout << "Cifra " << i << "= ";
        cin >> ch;
        switch (ch) {
            case 'I':
                valore = 1;
                cout << "valore=" << valore << endl;
                break;
            case 'V':
                valore = 5;
                cout << "valore=" << valore << endl;
                break;
            case 'X':
                valore = 10;
                cout << "valore=" << valore << endl;
                break;
            case 'L':
                valore = 50;
                cout << "valore=" << valore << endl;
                break;
            case 'C':
                valore = 100;
                cout << "valore=" << valore << endl;
                break;
            case 'D':
                valore = 500;
                cout << "valore=" << valore << endl;
                break;
            case 'M':
                valore = 1000;
                cout << "valore=" << valore << endl;
                break;
            default:
                cout << "Carattere errato,usare solo lettere romane!" << endl
                     << "Rifare l'operazione per evitare errori di calcolo" << endl;
        }

        cout << endl;
        ris = ris + valore;
        i++;
    }
    cout << "Il risultato e': " << ris << endl;


    return 0;
}
