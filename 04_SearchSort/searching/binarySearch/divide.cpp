#include<bits/stdc++.h>
int dvd(int x, int y){
    int low = 0;
    int h = x;
    int ans = 0;
    while(low <= h){
        int mid = low + (h - low) /2;
        cout<<"low: "<<low<<" high: "<<h<<endl;
        if(y * mid == x){
            return mid;
        }
        else if (y * mid <= x){
            ans = mid;
            low = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    return ans;
}
int main () {
   int x = 48;
   int y = 5;
   int ans = dvd(x, y);
   cout<<"Division of "<<x<<" and "<<y<<" is: "<<ans;
   return 0;
}