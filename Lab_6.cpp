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

void outputArrayData(const double* a, int n) {
    cout << "Stuff in the array: " << endl;
    for (int i = 0; i < n; ++i) {                   // Whole block outputs the array elements
        cout << *(a + i);
        if (i + 1 < n) cout << ", ";
    }
    cout << "\n";                                   // One newline at the end for better formatting
}

double sumArray(const double* a, int n) {         // Add it upppppppp
    double total = 0.0;
    for (const double* p = a; p != a + n; ++p) total += *p;
    return total;
}

int main() {
    double* arr = new double[N];

    enterArrayData(arr, N);
    outputArrayData(arr, N);
    cout << "Sum of array elements: " << sumArray(arr, N) << endl;
    delete[] arr;
    return 0;
}