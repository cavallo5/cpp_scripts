#include<iostream>
#include<cstdlib>

using namespace std;

bool pari(int n);

int main() {
    int a;
    cout << "Inserire il numero" << endl;
    cin >> a;
    if (pari(a)) cout << "Il numero e' pari" << endl;
    else cout << "Il numero e' dispari" << endl;

    return 0;
}

bool pari(int n) {
    bool condizione;
    if (n % 2 == 0)
        condizione = true;
    else condizione = false;

    return condizione;
}
