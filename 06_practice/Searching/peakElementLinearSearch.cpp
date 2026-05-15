#include<bits/stdc++.h>
vector<int> peakELement(vector<int> arr){
   
    int ans = 1;
    for(int i = 0; i < arr.size(); i++){
        if((arr[i] > arr[i - 1] ) && arr[i] > arr[i + 1]){
            ans = i;
        }
    }
    return { ans };
}
int main () {

   vector<int> arr = {10, 20, 30, 60, 50, 40};
   vector<int> val = peakELement(arr);

   cout<<"Peak element is at index: "<<val[0]<<" element is: "<<arr[val[0]];
   return 0;
} 