#include <iostream>
using namespace std;

int main() {

    int matrix[3][3] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };

    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements in the matrix: " << sum << endl;

    return 0;
}