#include<bits/stdc++.h>
int sqr(int x){
    int low = 0;
    int high = x;
    int ans = 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        if((long long)mid * mid == x){
            return mid;
        }
        else if((long long)mid * mid >= x){
            high = mid - 1;
        }
        else {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}
int main () {
   int x = 48;
   int ans = sqr(x);
   cout<<"square root of: "<<x<<" is "<<ans;
   return 0;
}