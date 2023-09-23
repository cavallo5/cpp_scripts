#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int n, i, s, x;
    cout << "Quanti numeri vuoi sommare? :" << endl;
    cin >> n;
    i = 1;
    s = 0;
    do {
        cout << "Inserire il " << i << " valore" << endl;
        cin >> x;
        s = s + x;
        i = i + 1;
    } while (i <= n);
    cout << "La loro somma e' " << s << endl;

    return 0;
}
 
