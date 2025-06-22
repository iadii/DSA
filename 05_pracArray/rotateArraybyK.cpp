#include<bits/stdc++.h>
int main () {
   
   int arr[] = {10, 20, 30, 40, 50, 60};
   int size = sizeof(arr) / sizeof(arr[0]);

   int k = 2;
   int temp[k];
   for(int i = 0; i < k; i++){
        temp[i] = arr[size - k + i];
   }

   return 0;
}          