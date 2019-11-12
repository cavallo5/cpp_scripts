#include <iostream>
#include <cstdlib>

using namespace std;
const int lMax=100;
bool anagramma (string prima, string seconda);

int main ()
{
    string s1, s2;
    cout << "Inserire la prima parola" << endl;
    cin >> s1;
    cout << "Inserire la seconda parola" << endl;
    cin >> s2;
    
    if (anagramma (s1, s2))
       cout << "Anagrama " << endl;
    else
       cout << "Non anagrama " << endl;
    
    system("PAUSE");
    return 0;
}

bool anagramma (string prima, string seconda)
{
     int l1, l2, i, j;
     l1 = prima.size();
     l2 = seconda.size();
     bool anagramma = true;
     if (l1 == l2)
     {
            bool trovato[lMax] = {false};
            i =0;
            do
            {
                j =0;
                anagramma = false;
                do
                {
                        if (prima[i] == seconda[j] && !trovato[j])
                        {
                             trovato[j] = true;
                             anagramma = true;
                        }
                     j++;
                }while(j < l2 && !anagramma);
                  i++;
            }while (i < l1 && anagramma);
     }else
          anagramma = false;
     return anagramma;
}






