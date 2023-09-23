#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int fib(int n);

int main() {
    int x, termine;
    cout << "Quale termine della serie vuole calcolare? " << endl;
    cin >> x;
    termine = fib(x);
    cout << termine << endl;


    system("PAUSE");
    return 0;
}

int fib(int n) {
    int f;
    if (n == 0 || n == 1) f = 1;
    else f = fib(n - 1) + fib(n - 2);
    return f;
}
