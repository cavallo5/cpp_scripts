#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

struct punto {
    float x, y;
};

//prototipi funzioni
float dist(punto P, punto Q);

void Letturapunto(punto &P);

int main() {
    punto A, B;
    cout << "Programma per il calcolo della distanza tra due punti " << endl;
    cout << "Inserire le cordinate del primo punto " << endl;
    Letturapunto(A);
    cout << "Inserire le cordinate del secondo punto " << endl;
    Letturapunto(B);
    float distanza;
    distanza = dist(A, B);
    cout << "La distanza e' " << distanza << endl;


    return 0;
}

float dist(punto P, punto Q) {
    float d, dx, dy;
    dx = P.x - Q.x;
    dy = P.y - Q.y;
    d = sqrt(dx * dx + dy * dy);
    return d;
}

void Letturapunto(punto &P) {
    cout << "x=";
    cin >> P.x;
    cout << "y=";
    cin >> P.y;
}
