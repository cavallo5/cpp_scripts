#include<iostream>
#include<cstdlib>

using namespace std;

void letturavettore(int *&vett, int n);

int main() {
    int n;
    cin >> n;
    int *p;
    letturavettore(p, n);

    return 0;
}

void letturavettore(int *&vett, int n) {
    vett = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Inserire il " << i + 1 << " valore ";
        cin >> vett[i];
    }
} 
