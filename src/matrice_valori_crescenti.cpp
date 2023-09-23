#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

const int D = 10;
typedef int matrice[D][D];

void LeggiMatrice(matrice mat, int d);

bool ValoriCresc(matrice mat, int d);

int main() {
    int n;
    cin >> n;
    matrice m;

    LeggiMatrice(m, n);

    bool test = ValoriCresc(m, n);

    if (test)
        cout << "condizione verificata";
    else
        cout << "condizione non verificata";

    return 0;
}

void LeggiMatrice(matrice mat, int d) {
    int i, j;
    for (i = 0; i < d; i++)
        for (j = 0; j < d; j++)
            cin >> mat[i][j];
}

bool ValoriCresc(matrice mat, int d) {
    int i, j;
    bool condizione = true;
    int prec = mat[0][0] - 1;

    for (i = 0; i < d && condizione; i++)
        for (j = 0; j < d && condizione; j++) {
            if (prec + 1 != mat[i][j])
                condizione = false;
            prec = mat[i][j];
        }
    return condizione;
}
