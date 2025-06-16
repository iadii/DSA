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
int main () {
   
    int n = 1234;

    int sol = revInt(n);
    cout<<sol;
   return 0;
}
