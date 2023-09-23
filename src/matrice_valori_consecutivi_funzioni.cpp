#include <iostream>
#include <cstdlib>

using namespace std;

const int dimMax = 100;
typedef int matrice[dimMax][dimMax];

void letturaMatrice(matrice mat, int n);

void stampaMatrice(matrice mat, int n);

bool verificaConsecutivi(matrice mat, int n);

int main() {
    int dim;
    matrice A;
    cout << "Inserire la dimensione della matrice quadrata: ";
    cin >> dim;

    cout << "Caricamanto della matrice: ";
    letturaMatrice(A, dim);
    cout << "La Matrice: " << endl;
    stampaMatrice(A, dim);

    if (verificaConsecutivi(A, dim))
        cout << "Tutti gli elementi sono consecutivi" << endl;
    else
        cout << "Non tutti gli elementi sono consecutivi" << endl;

}

void letturaMatrice(matrice mat, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "Inserire l'elemento " << i << ", " << j << " :";
            cin >> mat[i][j];
        }
}

void stampaMatrice(matrice mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout.width(4);
            cout << mat[i][j];
        }
        cout << endl;
    }

}

bool verificaConsecutivi(matrice mat, int n) {
    bool consecutivo = true;
    int valore = mat[0][0] - 1;
    for (int i = 0; i < n && consecutivo; i++)
        for (int j = 0; j < n && consecutivo; j++) {
            if (mat[i][j] != valore++)
                consecutivo = false;

        }
    return consecutivo;
}
