#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int s, x, i, USCITA;
    cout << "Programma per il calcolo della somma di numeri" << endl;
    cout << "Inserire il valore di uscita per interrompere il programma" << endl;
    cin >> USCITA;
    s = 0;
    i = 1;
    cout << "Inserisci il " << i << " valore: ";
    cin >> x;
    while (x != USCITA) {
        s = s + x;
        i = i + 1;
        cout << "Inserisci il " << i << " valore: ";
        cin >> x;
    }
    cout << "La loro somma e': " << s << endl;

    return 0;
}
