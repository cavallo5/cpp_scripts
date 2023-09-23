#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    const int MASSIMITENTATIVI = 10;
    const int NUMERONASCOSTO = 20;
    cout << "Indovinare il numero nascosto" << endl;
    cout << "Hai a disposizione " << MASSIMITENTATIVI << " tentativi" << endl;
    bool trovato = false;
    int numero;
    int i = 1;
    while (i <= MASSIMITENTATIVI && !trovato) {
        cout << "Inserire il " << i << " tentativo:";
        cin >> numero;
        if (numero == NUMERONASCOSTO)
            trovato = true;
        i++;
    }
    if (trovato) cout << numero << " e' il numero giusto" << endl << "Hai indovinato, complimenti!!!" << endl;
    else cout << "Non hai trovato il numero" << endl;


    return 0;
}
