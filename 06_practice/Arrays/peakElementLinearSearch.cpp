#include<bits/stdc++.h>
vector<int> peakELement(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
      if((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])){
         
         return {i};
      }
    }
    return {-1};
}
int main () {
    
   vector<int> arr = {10, 20, 50, 30, 40};
   vector<int> val = peakELement(arr);

   cout<<"Peak element is at index: "<<val[0]<<" element is: "<<arr[val[0]];
   return 0;
}