#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    const int D = 100;
    typedef int vettore[D];
    vettore v;
    int n;
    cout << "Quanti numeri nella sequenza? ";
    cin >> n;
    int k = 3;
    //lettura vettore
    for (int j = 0; j < n; j++) {
        cout << "v[" << j << "]= ";
        cin >> v[j];
    }
    int i = 1;
    bool condizione = true;
    while (i < n && condizione) {
        if (v[i] != v[i - 1] + k) {
            condizione = false;
        }
        i++;
    }
    if (condizione)
        cout << "Si sono a distanza k" << endl;
    else cout << "No non sono a distanza k" << endl;

    return 0;
}
