#include<bits/stdc++.h>
vector<int> peakELement(vector<int> arr){
    int n = arr.size();
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else if(arr[mid] > arr[mid + 1]){
            ans = mid;
            e = mid - 1;
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