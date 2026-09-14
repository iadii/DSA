#include<bits/stdc++.h>
double sqr(int x, int precision){
    int low = 0;
    int high = x;
    int ans = 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(mid * mid == x){
            return mid;
        }
        else if(mid * mid >= x){
            high = mid - 1;
        }
        else {
            ans = mid;
            low = mid + 1;
        }
    }
    double result = ans;
    double step = 0.1;
    for (int i = 0; i < precision; i++) {
        while ((result + step) * (result + step) <= x) {
            result += step;
        }
        step /= 10;
    }
    return result;
}
int main () {
   int x = 47;
   double ans = sqr(x, 3);
   cout<<"square root of: "<<x<<" is "<<ans;
   return 0;
}