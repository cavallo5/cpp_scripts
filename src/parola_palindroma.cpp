#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    string parola;
    cout << "Inserire parola ";
    cin >> parola;

    int i = 0;
    int j = parola.size() - 1;
    bool palindroma = true;

    while (i < j && palindroma) {
        if (parola[i] != parola[j])
            palindroma = false;
        i++;
        j--;
    }

    if (palindroma) cout << parola << " e' una parola palindroma";
    else cout << parola << " non e' una parola palindroma";
    cout << endl;

    return 0;
}

