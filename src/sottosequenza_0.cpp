#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int maxzeri, lseq, numero;
    cout << "Programma per il calcolo della più lunga sottosequenza di 0 in una sequenza di 0 e 1" << endl;
    maxzeri = 0;
    lseq = 0;
    cout << "Inserire il numero" << endl;
    cin >> numero;
    while (numero == 0 || numero == 1) {
        if (numero == 0) {
            lseq = lseq + 1;
            if (lseq > maxzeri)
                maxzeri = lseq;
        } else lseq = 0;
        cout << "Inserire il numero" << endl;
        cin >> numero;
    }
    cout << "La più lunga sottosequenza di 0 e' " << maxzeri << endl;

    system("PAUSE");
    return 0;
}
