#include <iostream>
#include <cstdlib>

using namespace std;

/*
int fibonacci(int n)
{     
      if (n==0 || n==1) return 1;
      int fi1=1, fi2=1, i=2 , f; 
      while (i<=n)
      {
            f=fi1+fi2;
            fi2=fi1;
            fi1=f;           
            i++;        
      }
      return f;
}
*/


int fibonacci(int n) {
    int f;
    if (n == 0 || n == 1) f = 1;
    else f = fibonacci(n - 1) + fibonacci(n - 2);
    return f;
}


int main() {
    int n = 0;

    while (n < 45) {
        cout << n << ' ';
        cout << fibonacci(n) << endl;
        n++;
    }

    return 0;
}
