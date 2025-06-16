#include<bits/stdc++.h>

int setBit(int n, int k){
    // n: input number
    // k: position of bit to set (0-based indexing)
    // Left shift 1 by k positions to create a number with only kth bit set
    // Example: for k=2, val = 1<<2 = 100 (binary)
    int val = 1 << k;

    // Use bitwise OR to set the kth bit of n to 1
    // If kth bit is already 1, it remains 1
    // If kth bit is 0, it becomes 1
    int ans = n | val;

    // return n| (1<<k);
    return ans;
}
int main () {
   
    int ans = setBit(15, 2);
    cout<<ans;
   return 0;
}