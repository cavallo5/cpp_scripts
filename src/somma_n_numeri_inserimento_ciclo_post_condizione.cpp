#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int x, s, i;
    const int USCITA = -100;
    cout << "Programa per il calcolo della somma di numeri" << endl;
    cout << "Inserire " << USCITA << " per interrompere" << endl;
    s = 0;
    x = 0;
    i = 0; //introdotta solamnete per essere visualizzata
    do {
        s = s + x;
        i = i + 1;
        cout << "Inserisci il " << i << " valore: ";
        cin >> x;
    } while (x != USCITA);
    cout << "La loro somma e': " << s << endl;

    return 0;
}
