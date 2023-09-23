#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int x, s, i;
    cout << "Programma per la somma di numeri" << endl << "Il programma si ferma quando si inserisce la cifra 0"
         << endl;
    x = 1; //Introdotta solamente per essere visualizzata
    i = 1;
    s = 0;
    while (x != 0) {
        cout << "Inserisci il " << i << " valore: ";
        cin >> x;
        s = s + x;
        i = i + 1;

    }
    cout << "Il risultato e' " << endl << s << endl;

    return 0;
}
