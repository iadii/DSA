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
   int x = -48;
   int y = 5;
    // to handle -ve number.
    // abs() fun converts -ve num to +ve num
    int ans = dvd(abs(x), abs(y));
    // return ans will be +ve. so to send user if needed to send -ve of +ve
    // -ve/-ve = +ve, +ve/+ve=+ve, +ve/-ve = -ve, -ve/+ve = -ve
    if((x>0 && y>0) || (x<0 && y<0)){
        cout<<"Division of "<<x<<" and "<<y<<" is: "<<ans;
    }
    else{
        cout<<"Division of "<<x<<" and "<<y<<" is: "<<-ans;
    }
   return 0;
}