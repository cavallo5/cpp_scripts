#include<iostream>
#include<cstdlib>

using namespace std;

const int righemassime = 10;
const int colonnemassime = 10;
typedef int matrice[righemassime][colonnemassime];

//prototipi di funzioni
void LetturaMatrice(matrice mat, int r, int c);

void SommaMatrici(matrice mat1, matrice mat2, matrice matsomma,
                  int r, int c);

void StampaMatrice(matrice mat, int r, int c);

int main() {
    int n;    //numero righe effettivo
    int m;   //numero colonne effettivo
    matrice a, b, c; //var. locali al main
    cout << "Inserire il numero di righe della matrice";
    cin >> n;
    cout << "Inserire il numero di colonne della matrice";
    cin >> m;
    LetturaMatrice(a, n, m);
    LetturaMatrice(b, n, m);
    SommaMatrici(a, b, c, n, m);
    StampaMatrice(c, n, m);

    return 0;
}

void LetturaMatrice(matrice mat, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Inserire il " << i << "," << j << " valore: ";
            cin >> mat[i][j];
        }
    }
}

void SommaMatrici(matrice mat1, matrice mat2, matrice matsomma,
                  int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            matsomma[i][j] = mat1[i][j] + mat2[i][j];
}

void StampaMatrice(matrice mat, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout.width(4);
            cout << mat[i][j];
        }
        cout << endl;
    }
}
