#include<bits/stdc++.h>

int revInt(int num){
    int ans = 0;
    int rem;
    while(num > 0){
        rem = num % 10;
        ans = ans * 10 + rem;
        num = num / 10;
    }
    return ans;
}

int forEdgeCases(int x){
     bool isNeg = false;
        if(x <= INT_MIN){
            return 0;
        }
        if(x < 0){
            isNeg = true;
            x = -x;
        }

        int ans = 0;
        int rem;
        while(x > 0){
            if(ans > INT_MAX/10){
                return 0;
            }
            rem = x % 10;
            ans = ans*10 + rem;
            x /= 10;
        }

        return isNeg ? -ans : ans;
}
int main () {
   
    int n = 1234;

    int sol = revInt(n);
    cout<<sol;
   return 0;
}
