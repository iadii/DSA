#include<bits/stdc++.h>

void rotation(vector<int> arr){
   
   int temp = arr[arr.size() -1];

   for(int i = arr.size() - 1; i > 0; --i){
      arr[i] = arr[i-1];
   }
   arr[0] = temp;
    
   for(int n : arr){
      cout<<n<<" ";
   }
}

int main () {
   vector<int> num = {
    2, 7, 34, 21, 5, 8, 19, 3, 45, 27, 10, 16, 6, 38, 12
   };
   rotation(num);
   return 0;
}