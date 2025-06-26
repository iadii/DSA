#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    int size1 = sizeof(arr[0]) / sizeof(arr[0][0]);

    // Output the 2D array
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}