#include<iostream>
#include<cstdlib>

using namespace std;

//prototipi funzioni
int fatt(int x);

int main() {
    int numero, risultato;
    cout << "Programma per il calcolo del fattoriale" << endl;
    cout << "Inserire il numero : ";
    cin >> numero;
    risultato = fatt(numero);
    cout << "Il fattoriale di " << numero << " e' " << risultato << endl;

    system("PAUSE");
    return 0;
}

int fatt(int x) {
    if (x == 0) return 1;
    else return x * fatt(x - 1);
}
