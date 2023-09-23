#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int i, ris, n, valore;
    char ch;
    cout << "Programma per il calcolo di un numero romano" << endl;
    i = 1;
    ris = 0;
    cout << "Di quante cifre e' costituito il numero romano?" << endl;
    cin >> n;
    while (i <= n) {
        cout << "Inserire la " << i << " cifra" << endl;
        cin >> ch;
        switch (ch) {
            case 'I':
                valore = 1;
                break;
            case 'V':
                valore = 5;
                break;
            case 'X':
                valore = 10;
                break;
            case 'L':
                valore = 50;
                break;
            case 'C':
                valore = 100;
                break;
            case 'D':
                valore = 500;
                break;
            case 'M':
                valore = 1000;
                break;
            default:
                cout << "Carattere errato,usare solo lettere romane!" << endl
                     << "Rifare l'operazione per evitare errori di calcolo" << endl;
        }
        ris = ris + valore;
        i = i + 1;
    }
    cout << "Il risultato e' " << ris << endl;

    return 0;
}
