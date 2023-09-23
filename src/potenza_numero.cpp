#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int base, esponente, potenza, iterazionifatte;
    cout << "Programma per il calcolo della potenza di un numero" << endl;
    cout << "Inserire la base" << endl;
    cin >> base;
    cout << "Inserire l'esponente" << endl;
    cin >> esponente;
    if (esponente < 0) {
        cout << "Errore" << endl;
    } else {
        if (base == 0 && esponente == 0) {
            cout << "Errore" << endl;
        } else {
            iterazionifatte = 0;
            potenza = 1;
            while (iterazionifatte < esponente) {
                potenza = potenza * base;
                iterazionifatte = iterazionifatte + 1;
            }
            cout << "Potenza =" << potenza << endl;
        }

    }


    return 0;
}
