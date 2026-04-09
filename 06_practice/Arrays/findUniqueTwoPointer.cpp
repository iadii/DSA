#include<bits/stdc++.h>
vector<int> usingTwoPointer (vector <int> arr){
    sort(arr.begin(), arr.end());
    int i = 0;
    while(i < arr.size()){
        if(arr[i] == arr[i+ 1]){
            i += 2;
        }
        else{ 
            return {i};
        }
    }
    return {-1};
}
int main () {
   vector<int> arr = {4, 1, 2, 1, 2, 5, 5};
   vector<int> val = usingTwoPointer(arr);
   cout<<"unique element is : "<<val[0]<<" ";
   return 0;
}