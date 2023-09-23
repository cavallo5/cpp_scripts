#include<iostream>
#include<cstdlib>

using namespace std;

//variabili globali
int n, massimo;
const int D = 100;
typedef int vettore[D];
vettore v;


//prototipi delle funzioni
void letturavettore();

void ricercamassimo();

void stampamassimo();

int main() {
    cout << "Programma per il calcolo del massimo in un vettore con uso delle funzioni" << endl;
    letturavettore();
    ricercamassimo();
    stampamassimo();

    return 0;
}

void letturavettore() {
    cout << "Inserire la dimensione del vettore" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Inserire il v[" << i << "]: ";
        cin >> v[i];
    }
}

void ricercamassimo() {
    massimo = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > massimo)
            massimo = v[i];
}

void stampamassimo() {
    cout << "Il massimo e' " << massimo << endl;
}
