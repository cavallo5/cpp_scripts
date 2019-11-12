#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

bool Palindroma(string parola)
{
	int i=0;
	int j=parola.size()-1;
	bool palindroma=true;
	while(i<j && palindroma)
	{
		if (parola[i] != parola[j])
			palindroma=false;
		i++;
		j--;
	}
	return palindroma;
}

int main()
{
	string p;
	cout<<"Inserire prima parola ";
	cin>> p;
	bool verifica1=Palindroma(p);
	string p1;
	cout<<"Inserire seconda parola ";
	cin>> p1;
	bool verifica2=Palindroma(p1);
	if (verifica1 && verifica2)
	   cout<<"entrambe le parole sono palindrome!";

   system("PAUSE");
   return 0;
}
