#include<iostream>
#include<cstdlib>

using namespace std;

typedef int **matrice;

//prototipi funzioni
matrice Inizializzamatrice(int r, int c);

void Letturamatrice(matrice mat, int r, int c);

void Stampamatrice(matrice mat, int r, int c);

int main() {
    int nr, nc;
    cout << "Programma per la lettura e stampa di una matrice " << endl;
    cout << "Inserire il numero di righe= ";
    cin >> nr;
    cout << "Inserire il numero di colonne= ";
    cin >> nc;
    matrice a;
    a = Inizializzamatrice(nr, nc);
    Letturamatrice(a, nr, nc);
    cout << endl << "La matrice e' :" << endl;
    Stampamatrice(a, nr, nc);
    cout << endl;

    return 0;
}

matrice Inizializzamatrice(int r, int c) {
    matrice mat;
    mat = new int *[r];
    for (int i = 0; i < r; i++)
        mat[i] = new int[c];
    return mat;
}

void Letturamatrice(matrice mat, int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cout << "mat[" << i << "][" << j << "]= ";
            cin >> mat[i][j];
        }
}

void Stampamatrice(matrice mat, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout.width(4);
            cout << mat[i][j];
        }
        cout << endl;
    }
}
