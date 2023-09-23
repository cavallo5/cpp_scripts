#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

/*
Scrivere una funzione che memorizza in un 
array dinamico le prime n potenze di una 
base b. La funzione deve allocare al suo 
interno l'array da restituire, utilizzando 
il seguente prototipo:
	int* potenze (int b, int n);
Per esempio, se b=2 e n=5, l'array 
conterrà 2, 4, 8, 16, 32.
Scrivere un breve programma 
principale per illustrare la chiamata 
della funzione. 
*/

int *potenze(int b, int n) {
    int *vett = new int[n];

    int potenza = 1;

    for (int i = 0; i < n; i++) {
        potenza = potenza * b;
        vett[i] = potenza;
    }
    return vett;
}

int main() {
    int base;
    cin >> base;
    int num;
    cin >> num;

    int *p = potenze(base, num);

    for (int i = 0; i < num; i++)
        cout << p[i] << "  ";


    return 0;
}
                    
