#include <iostream>
#include <cstdlib>

using namespace std;

#include "codaRarray.h"

coda LeggiCoda(int n) {
    coda c;
    c = CreaCoda();
    int x;
    for (int i = 0; i < n; i++) {
        cout << "elemento " << i << "=";
        cin >> x;
        Push(x, c);
    }
    return c;
}

void SommaElementiCoda(coda &c) {
    int x;
    int s = 0;
    while (!CodaVuota(c)) {
        x = Front(c);
        s = s + x;
        Pop(c);
    }
    Push(s, c);
}

void ScriviCoda(coda c) {
    int x;
    while (!CodaVuota(c)) {
        x = Front(c);
        cout << x << " ";
        Pop(c);
    }
}


int main() {
    coda c;
    int n;
    cout << "numero di elementi";
    cin >> n;
    c = LeggiCoda(n);

    SommaElementiCoda(c);

    cout << "coda inserita:";
    ScriviCoda(c);

    return 0;

}

