#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int a;
    cout << "Non inserire 0" << endl;
    do {
        cin >> a;
        if (a == 0)
            cout << "Riprova" << endl;
    } while (a == 0);
    cout << "Hai inserito=" << a << endl;


    return 0;
}
