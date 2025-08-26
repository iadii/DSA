// find set bits in integer number
#include<bits/stdc++.h>

int main () {
   
    int x = 3;  // 3 in binary is 011
    int count = 0;
    
    while(x) {
        if(x & 1) {    // checks if last bit is 1
            count++;    // if yes, increment counter
        }
        x = x >> 1;    // right shift to check next bit
    }
    cout << "Number of set bits: " << count;

    // traditional way
    int num = 3;  // new variable instead of reusing x
    int set = 0;
    int countTrad = 0;
    while(num){
        set = num % 2;
        if(set) countTrad++;
        num /= 2;
    }

    cout << "\nTraditional method count: " << countTrad;
    
    return 0;
}