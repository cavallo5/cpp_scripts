#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int a, b, max;
    cout << "Programma per il massimo tra due numeri" << endl << "Inserire il primo numero" << endl;
    cin >> a;
    cout << endl << "Inserire il secondo numero" << endl;
    cin >> b;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    cout << endl << "Il massimo e' " << max << endl;

    system("PAUSE");
    return 0;
}
