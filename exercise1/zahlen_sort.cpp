#include <iostream>
#include <string>
 
int main() {
    using namespace std;

    cout<< "Drei Zahlen getrennt mit Leertaste: ";
    int Zahl1, Zahl2, Zahl3;

    cin >> Zahl1 >> Zahl2 >> Zahl3;
    
    int Angabe[] = {Zahl1, Zahl2, Zahl3};
    int anzahl = 3;

    for (int i = 1; i < anzahl; ++i) {
        int sortieren = i;
        while (sortieren > 0 && Angabe[sortieren - 1] > Angabe[sortieren]) {
            int tauschen = Angabe[sortieren];
            Angabe[sortieren] = Angabe[sortieren - 1];
            Angabe[sortieren - 1] = tauschen;
            --sortieren;
        }
    }
    
    for (int i = 0; i < anzahl; ++i) {
        cout << Angabe[i] << "  ";
    }
    cout << "\n";
return 0;
}