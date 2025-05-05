#include<bits/stdc++.h>

int main() {
    int num;
    bool isPrime = true;
    
    cout << "Enter number to check if it is prime or not: ";
    cin >> num;

    if(num <= 1) {
        isPrime = false;
    }
    else {
        for(int i = 2; i <= sqrt(num); i++) {
            if(num % i == 0) {
                isPrime = false;
            }
        }
    }
    
    if(isPrime) {
        cout << num << " is a prime number" << endl;
    }
    else {
        cout << num << " is not a prime number" << endl;
    }

    return 0;
}