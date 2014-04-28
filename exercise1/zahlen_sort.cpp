#include <iostream>
#include <string>
#include <algorithm>
 
int main() {
    using namespace std;

    cout<< "Bitte geben Sie die erste Zahl ein: ";
    int Zahl1;
    cin >> Zahl1;
    cout<< "Bitte geben Sie die zweite Zahl ein: ";
    int Zahl2;
    cin >> Zahl2;
    cout<< "Bitte geben Sie die dritte Zahl ein: ";
    int Zahl3;
    cin >> Zahl3;

    int iaArray[] = {Zahl1, Zahl2, Zahl3};
    int iLength = 3;

    // Insertion sort
    for (int iIndex = 1; iIndex < iLength; ++iIndex) {
        // Initialize a local insertion index
        int iInsert = iIndex;
        while (iInsert > 0 && iaArray[iInsert - 1] > iaArray[iInsert]) {
            int iSwap             = iaArray[iInsert];
            iaArray[iInsert]      = iaArray[iInsert - 1];
            iaArray[iInsert - 1]  = iSwap;
            --iInsert;
        }
    }

	// Output the sorted array
    for (int iIndex = 0; iIndex < iLength; ++iIndex) {
        cout << iaArray[iIndex] << "  ";
    }
    cout << endl;

	cin.get();
    return 0;
}