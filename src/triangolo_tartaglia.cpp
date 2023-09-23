#include<iostream>
#include<cstdlib>

using namespace std;

const int D = 20;
typedef int matrice[D][D];

void costruzionetriangolo(matrice t, int r);

void stampatriangolo(matrice t, int r);

int main() {
    int n;
    cout << "Triangolo di Tartaglia" << endl;
    cout << "Numero di righe" << endl;
    cin >> n;
    matrice m;
    costruzionetriangolo(m, n);
    stampatriangolo(m, n);

    return 0;
}

void costruzionetriangolo(matrice t, int r) {
    for (int i = 1; i < r; i++)
        t[i][i] = 0;

    for (int i = 0; i < r; i++)
        t[i][0] = 1;

    for (int i = 2; i < r; i++)
        for (int j = 0; j < i; j++)
            t[i][j] = t[i - 1][j - 1] + t[i - 1][j];

}

void stampatriangolo(matrice t, int r) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            cout.width(4);
            cout << t[i][j] << " ";
            cout << endl;
        }
    }
}
