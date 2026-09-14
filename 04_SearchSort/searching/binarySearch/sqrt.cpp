#include<bits/stdc++.h>
int sqr(int x){
    int low = 0;
    int high = x;
    int ans = 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        // leet code because some long number  multiplication will return very long answer
        // thats why we type cast in long long
        // if((long long)mid * mid == x){
        if(mid * mid == x){
            return mid;
        }
        // else if((long long)mid * mid >= x){
        else if(mid * mid >= x){
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