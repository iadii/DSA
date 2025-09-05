#include<bits/stdc++.h>
int leastValue(vector<int> arr){
    int min_val = INT_MAX;
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] <= min_val){
            min_val = arr[i];
        }
    }
    return min_val;
}
int main () {
   vector<int> arr = {45, 12, 89, 34, 56, 19};
   int val = leastValue(arr);
   cout<<"Least value in given element is: "<<val;

   return 0;
}