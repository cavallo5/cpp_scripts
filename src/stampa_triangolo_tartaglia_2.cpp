#include <iostream>
#include <cstdlib>

using namespace std;

const int D = 20;
typedef int matrice[D][D];

void costruzionetriangolo(matrice t, int r);

void stampatriangolo(matrice t, int r);

int main() {
    int n;
    cout << "numero di righe Triangolo di Tartaglia =";
    cin >> n;

    matrice m;

    costruzionetriangolo(m, n);
    stampatriangolo(m, n);

    return 0;
}

void costruzionetriangolo(matrice t, int r) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < r; j++)
            t[i][j] = 0;

    for (int i = 0; i < r; i++)
        t[i][0] = 1;

    for (int i = 1; i < r; i++)
        for (int j = 1; j <= i; j++)
            t[i][j] = t[i - 1][j - 1] + t[i - 1][j];
}

void stampatriangolo(matrice t, int r) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j <= i; j++)
            cout << t[i][j] << " ";
        cout << endl;
    }
}
