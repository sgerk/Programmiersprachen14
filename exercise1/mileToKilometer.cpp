#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<< "Bitte geben Sie die Meile ein: ";
	int mile;
	cin >> mile;
	int kilometer = 1609344; //in mile
	int umrechnung = mile * kilometer;
	cout << mile << " Meile" << " = " << umrechnung << " Kilometer\n"; 
}