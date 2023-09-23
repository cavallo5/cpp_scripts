#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int i, j, n;
    cout << "Tabella pitagorica" << endl;
    cout << "Qual e' la dimensione?" << endl;
    cin >> n;
    i = 1;
    while (i <= n) {
        j = 1;
        while (j <= n) {
            if (i * j < 10) cout << " ";
            if (i * j < 100) cout << " ";
            cout << i * j << " ";
            j = j + 1;

        }
        cout << endl;
        i = i + 1;

    }

    return 0;
}
