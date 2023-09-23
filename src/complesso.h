#include<cstdlib>
#include<iostream>

using namespace std;

struct complesso {
    float re, im;
};

complesso LeggiC() {
    complesso z;
    cout << "re=";
    cin >> z.re;
    cout << "im=";
    cin >> z.im;
    return z;
}

void ScriviC(complesso z) {
    cout << "re=" << z.re << endl << "im=" << z.im << endl;
}

complesso Somma(complesso z1, complesso z2) {
    complesso z3;
    z3.re = z1.re + z2.re;
    z3.im = z1.im + z2.im;
    return z3;
}

complesso Prodotto(complesso z1, complesso z2) {
    complesso z3;
    z3.re = z1.re * z2.re - z1.im * z2.im;
    z3.im = z1.im * z2.re + z1.re * z2.im;
    return z3;
}
