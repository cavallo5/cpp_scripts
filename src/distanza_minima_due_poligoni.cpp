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

float distmin(poligono A, int nA, poligono B, int nB, int &psA, int &posB);

float distanza(punto P, punto Q);

int main() {
    poligono A1, A2;
    int nA1, nA2;
    int pos1, pos2;
    cout << "Inserire numero di vertici del primo poligono: ";
    Letturapoligono(A1, nA1);
    cout << "Inserire numero di vertici del secondo poligono: ";
    Letturapoligono(A2, nA2);
    float d = distmin(A1, nA1, A2, nA2, pos1, pos2);
    cout << "Distanza minima= " << d << endl;

    return 0;
}

void Letturapoligono(poligono &A, int &nA) {

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

float distmin(poligono A, int nA, poligono B, int nB, int &posA, int &posB) {
    float d;
    float dmin = distanza(A[0], B[0]);
    posA = 0;
    posB = 0;
    for (int i = 0; i < nA; i++)
        for (int j = 0; j < nB; j++) {
            d = distanza(A[i], B[j]);
            if (d < dmin) {
                dmin = d;
                posA = i;
                posB = j;
            }
        }
    return dmin;
}

float distanza(punto P, punto Q) {
    float d, dx, dy;
    dx = P.x - Q.x;
    dy = P.y - Q.y;
    d = sqrt(dx * dx + dy * dy);
    return d;
}
