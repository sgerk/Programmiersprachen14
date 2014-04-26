#include <vector>

int main() //Typ -> int, Funktion main()
{
	int a = 9; // Variable = a, Typ = int, Wert = 9, Objekt int a = 9 
	bool b = false; // Variable = b, Typ = bool, Wert = false, Objekt = bool b = false
	char c = 'a'; // Variable  = c, Typ = char, Wert = a, Objekt =char c = 'a'
	double d = 1.3; // Variable = d, Typ = double, Wert = 1.3, Objekt = double d = 1.3
	int const two = 2; // Variable = two, Typ = int const, Wert = 2; Objekt = int const two = 2;
	double e = a/two; // Variable e, Typ = double, Wert = a/two, Objekt =double e a/two

	two = d; //Neuzuweisung two ist jetzt d => error da two const ist und darf nicht verändert werden

	return 0;
}