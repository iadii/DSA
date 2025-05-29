#include<bits/stdc++.h>
int main () {
   
    int a = 2;

    // when we left shift by 2 we multiply that number 2^2
    // if num is 2 then left shift 1 will be 2 * 2^2 = 8
    // again we lwft shift by 1 , 8 * 2^2 = 16
    int leftShiftby2 = a<<2;
    cout<<leftShiftby2<<endl;

    // when we left shift by 1 we multiply that number 2^1 
    // if num is 2 then left shift 1 will be 2 * 2^1 = 4
    // again we lwft shift by 1 , 4 * 2^1 = 8
    int leftShift1 = a<<1;
    cout<<leftShift1<<endl;
    
    // when we left shift by 3 we multiply that number 2^3
    // if num is 2 then left shift 1 will be 2 * 2^3 = 16
    // again we lwft shift by 1 , 16 * 2^3 = 128
    int leftShift3 = a<<3;
    cout<<leftShift3;
   return 0;
}