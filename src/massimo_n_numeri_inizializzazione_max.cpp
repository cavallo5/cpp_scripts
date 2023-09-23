#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int n, x, i, max;
    cout << "Programma per il calcolo del massimo tra n numeri" << endl;
    cout << "Quanti numeri vuoi confrontare?" << endl;
    cin >> n;
    cout << "Inserire il 1 numero: ";
    cin >> x;
    max = x;
    i = 2;
    while (i <= n) {
        cout << "Inserire il " << i << " numero: ";
        cin >> x;
        if (x > max) {
            max = x;
        } else max = max;
        i = i + 1;
    }
    cout << "Il massimo e': " << max << endl;

    return 0;
}
