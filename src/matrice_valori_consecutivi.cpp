#include <iostream>
#include <cstdlib>

using namespace std;

const int dimMax = 100;
typedef int matrice[dimMax][dimMax];

int main() {
    int dim;
    matrice A;
    cout << "Inserire la dimensione della matrice quadrata: ";
    cin >> dim;

    cout << "Caricamanto della matrice: ";
    for (int i = 0; i < dim; i++)
        for (int j = 0; j < dim; j++) {
            cout << "Inserire l'elemento " << i << ", " << j << " :";
            cin >> A[i][j];
        }
    cout << "La Matrice: " << endl;
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            cout.width(4);
            cout << A[i][j];
        }
        cout << endl;
    }

    bool consecutivo = true;
    int valore = A[0][0] - 1;
    for (int i = 0; i < dim && consecutivo; i++)
        for (int j = 0; j < dim && consecutivo; j++) {
            if (A[i][j] != valore++)
                consecutivo = false;

        }
    if (consecutivo)
        cout << "Tutti gli elementi sono consecutivi" << endl;
    else
        cout << "Non tutti gli elementi sono consecutivi" << endl;

}

