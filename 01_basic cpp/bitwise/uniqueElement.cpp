#include<bits/stdc++.h>
int main () {
   int arr[] = {2,3,4,5,4,3,2};

   int result = 0;
   for(int i = 0; i<7; i++){
        result ^= arr[i];
    
   }
   cout<<result;
   return 0;
}