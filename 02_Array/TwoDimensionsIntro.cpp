#include <iostream>
using namespace std;

int main() {
    // Introduction to 2D Arrays
    cout << "This program demonstrates the basics of 2D arrays in C++." << endl;
    cout << "A 2D array can be thought of as an array of arrays (a matrix)." << endl;
    cout << "Here, we declare and initialize a 3x4 integer array:" << endl << endl;

    // Declare and initialize a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Output the 2D array
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}