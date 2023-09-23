#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int MAXRANGO = 10;
    typedef int matrice[MAXRANGO][MAXRANGO];
    matrice mat;

    int n;
    cout << "Inserire il rango della matrice quadrata ";
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "Inserire il valore " << i << ',' << j << ':';
            cin >> mat[i][j];
        }

    bool diagonale = true; //permette di entrare nel ciclo

    for (int i = 0; i < n && diagonale; i++)
        for (int j = 0; j < n && diagonale; j++)
            if (i != j && mat[i][j] != 0)
                diagonale = false;

    if (diagonale) cout << "La matrice e' diagonale";
    else cout << "La matrice non e' diagonale";
    cout << endl;

    return 0;
}

