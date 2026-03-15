#include<bits/stdc++.h>
using namespace std;

int minimumSum(int num) {
    vector<int> digits;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    
    // Bubble Sort to sort digits
    int n = digits.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (digits[j] > digits[j + 1]) {
                swap(digits[j], digits[j + 1]);
            }
        }
    }
    
    // Form two numbers using digits[0], digits[2] and digits[1], digits[3]
    // for minimum sum
    int num1 = digits[0] * 10 + digits[2];
    int num2 = digits[1] * 10 + digits[3];
    
    return num1 + num2;
}

int main() {
    int num1 = 2932;
    cout << "num = 2932, output = " << minimumSum(num1) << endl;
    
    int num2 = 4009;
    cout << "num = 4009, output = " << minimumSum(num2) << endl;
    
    return 0;
}
