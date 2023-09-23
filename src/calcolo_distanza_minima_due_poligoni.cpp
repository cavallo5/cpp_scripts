#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

struct punto {
    float x, y;
};

typedef punto *poligono;

void Letturapoligono(poligono &A, int &nA);

void Letturapunto(punto &P);

float Distmin(poligono A, int nA, poligono B, int nB, int &posA, int &posB);

void Scritturapunto(punto P);

float Distanza(punto P, punto Q);

int main() {
    poligono A1, A2;
    int nA1, nA2;
    cout << "Programma per il calcolo della distanza minima tra due poligoni " << endl;
    cout << "Lettura primo poligono " << endl;
    Letturapoligono(A1, nA1);
    cout << "Lettura secondo poligono " << endl;
    Letturapoligono(A2, nA2);
    float distanzaminima;
    int pos1, pos2;
    distanzaminima = Distmin(A1, nA1, A2, nA2, pos1, pos2);
    cout << "La distanza minima,calcolata tra i vertici ";
    Scritturapunto(A1[pos1]);
    Scritturapunto(A2[pos2]);
    cout << " dei due poligoni e' " << distanzaminima << endl;
    cout << endl;

    return 0;
}

void Letturapoligono(poligono &A, int &nA) {
    cout << "Inserire numero di vertici del poligono: ";
    cin >> nA;
    A = new punto[nA];
    for (int i = 0; i < nA; i++) {
        cout << "vertice " << i << endl;
        Letturapunto(A[i]);
    }
}

void Letturapunto(punto &P) {
    cout << "x=";
    cin >> P.x;
    cout << "y=";
    cin >> P.y;
}

float Distmin(poligono A, int nA, poligono B, int nB, int &posA, int &posB) {
    float d;
    float dmin = Distanza(A[0], B[0]);
    posA = 0;
    posB = 0;
    for (int i = 0; i < nA; i++)
        for (int j = 0; j < nB; j++) {
            d = Distanza(A[i], B[j]);
            if (d < dmin) {
                dmin = d;
                posA = i;
                posB = j;
            }
        }
    return dmin;
}

void Scritturapunto(punto P) {
    cout << '(' << P.x << ',' << P.y << ')';
}

float Distanza(punto P, punto Q) {
    float d, dx, dy;
    dx = P.x - Q.x;
    dy = P.y - Q.y;
    d = sqrt(dx * dx + dy * dy);
    return d;
}
