#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int a, b, c;
    cout << "Inserire la lunghezza del primo lato" << endl;
    cin >> a;
    cout << "Inserire la lunghezza del secondo lato" << endl;
    cin >> b;
    cout << "Inserire la lunghezza del terzo lato" << endl;
    cin >> c;
    if (!(a < b + c && b < a + c && c < a + b))
        cout << "La lunghezza dei lati non costituisce un triangolo" << endl;
    else {
        if (a == b && b == c)
            cout << "Il triangolo e' equilatero" << endl;
        else {
            if (a == b || b == c || a == c)
                cout << "Il triangolo e' isoscele";
            else
                cout << "Il triangolo e' scaleno";
        }
    }

    return 0;
}
