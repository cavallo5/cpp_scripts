#include <iostream>
#include <cstdlib>

using namespace std;

void LetturaVettore(int *&vett, int n) {
    vett = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Inserire il " << i + 1 << " valore ";
        cin >> vett[i];
    }
}

int RicercaMassimo(int *v, int n) {
    int massimo = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > massimo)
            massimo = v[i];
    return massimo;
}

int main() {
    int n;
    cout << "Inserire la dimensione del vettore ";
    cin >> n;
    int *p;
    LetturaVettore(p, n);
    int max = RicercaMassimo(p, n);
    cout << "massimo=" << max << endl;

    return 0;
}
