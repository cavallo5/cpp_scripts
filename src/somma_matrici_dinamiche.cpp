#include<iostream>
#include<cstdlib>

using namespace std;

typedef int **matrice;

matrice Inizializzamatrice(int r, int c);

void Letturamatrice(matrice mat, int r, int c);

void Sommamatrici(matrice mat1, matrice mat2, matrice mat3, int r, int c);

void Stampamatrice(matrice mat, int r, int c);

int main() {
    matrice a, b, c;
    int nr, nc;
    cout << "Inserire il numero di righe della matrice" << endl;
    cin >> nr;
    cout << "Inserire il numero di colonne della matrice" << endl;
    cin >> nc;
    a = Inizializzamatrice(nr, nc);
    b = Inizializzamatrice(nr, nc);
    c = Inizializzamatrice(nr, nc);
    Letturamatrice(a, nr, nc);
    Letturamatrice(b, nr, nc);
    Sommamatrici(a, b, c, nr, nc);
    Stampamatrice(c, nr, nc);

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
            cout << "Inserire il valore" << i << "." << j << ": ";
            cin >> mat[i][j];
        }
}

void Sommamatrici(matrice mat1, matrice mat2, matrice mat3, int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
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
