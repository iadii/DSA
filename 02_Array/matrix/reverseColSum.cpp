#include <bits/stdc++.h>

int main () {
    int arr[3][3] = {
        {2, 4, 6},
        {8, 10, 102},
        {15, 16, 18}
    };

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += arr[2 - i][i];
    }

    cout << "sum is " << sum;

    return 0;
}