#include<iostream>
#include<cstdlib>

using namespace std;

//prototipo funzione
void somma(int *a, int *b, int *c);

int main() {
    int *x, *y, *z;
    cout << "Somma tra due numeri " << endl;
    x = new int;
    y = new int;
    z = new int;
    cout << "Inserire il primo numero " << endl;
    cin >> *x;
    cout << "Inserire il secondo numero " << endl;
    cin >> *y;
    somma(x, y, z);
    cout << "Il risultato e' " << *z << endl;

    return 0;
}

void somma(int *a, int *b, int *c) {
    *c = *a + *b;
}
