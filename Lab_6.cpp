#include <iostream>
using namespace std;

const int N = 5; // Size of the array

void enterArrayData(double* a, int n) {
    for (int i = 0; i < n; ++i) {
        cout << " Enter element " << i << ": "; //  Whole block asks for user input
        cin >> *(a + i);                        //  and stores it in the array
    }
    cout << "Data entered :)" << endl;
}

