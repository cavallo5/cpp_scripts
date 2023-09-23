#include<iostream>
#include<cstdlib>

using namespace std;

//prototipo funzione
int *Letturavettore(int n);

void Stampavettore(int *vett, int n);

int main() {
    int n;
    cout << "Programma per la lettura e la stampa di un vettore " << endl;
    cout << "Inserire la dimensione dell'array " << endl;
    cin >> n;
    int *p = Letturavettore(n);
    Stampavettore(p, n);
    cout << endl;

    return 0;
}

int *Letturavettore(int n) {
    int *vett = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Inserire il " << i + 1 << " elemento" << endl;
        cin >> vett[i];
    }
    return vett;
}

void Stampavettore(int *vett, int n) {
    for (int i = 0; i < n; i++)
        cout << "v[" << i << "]=" << vett[i] << endl;
}
