#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int quoziente, numero, resto, base;
    cout << "Conversione da base 10 a base qualsiasi" << endl;
    cout << "Numero in base 10 = ";
    cin >> numero;
    cout << "Base di arrivo= ";
    cin >> base;
    quoziente = numero;
    cout << "Il risultato bisogna leggere al contrario" << endl;
    while (quoziente != 0) {
        resto = quoziente % base;
        cout << resto << " ";
        quoziente = quoziente / base;
        switch (resto) {
            case 10:
                cout << 'A';
                break;
            case 11:
                cout << 'B';
                break;
            case 12:
                cout << 'C';
                break;
            case 13:
                cout << 'D';
                break;
            case 14:
                cout << 'E';
                break;
            case 15:
                cout << 'F';
                break;
            default:
                cout << resto << " ";
        }
        cout << " ";

    }
    cout << endl;

    return 0;
}
