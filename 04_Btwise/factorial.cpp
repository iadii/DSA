#include<bits/stdc++.h>

using namespace std;

int factTrad(int num){

    if(num < 2){
        return 1;
    }
    else{
        return num * factTrad(num-1);
    }

    // since we can't find bigger number factorial 
    // using traditional way because it will be bigger than the range of int
    // although we can use long int
    
}

int main () {
   
    int num = 5;

    int resTrad = factTrad(num);
    cout<<resTrad;

   return 0;
}