#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    const int maxrango = 10;
    typedef int matrice[maxrango][maxrango];

    matrice a, b;
    int n;
    cout << "Inserire la dimensione della matrice" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "Inserire il valore " << i << "," << j << ": ";
            cin >> a[i][j];
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            b[i][j] = a[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout.width(4);
            cout << b[i][j];
        }
        cout << endl;
    }


    return 0;

}
