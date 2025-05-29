#include<bits/stdc++.h>
int main () {
   
    int a = 100;

    // if we right shift any num by n time the it will num / 2^n

    // when we right shift by 2 it will divided by number/ 2^2
    // if num is 100 then right shift 1 will be 100 / 2^2 = 25
    int rightShiftby2 = a>>2;
    cout<<rightShiftby2<<endl;

    // when we right shift by 2 it will divided by number/ 2^1
    // if num is 100 then right shift 1 will be 100 / 2^1 = 50
    int rightShift1 = a>>1;
    cout<<rightShift1<<endl;

    // when we right shift by 2 it will divided by number/ 2^3
    // if num is 100 then right shift 1 will be 100 / 2^3 = 12
    int rightShift3 = a>>3;
    cout<<rightShift3;
   return 0;
}