#include<bits/stdc++.h>
vector <int> rotate(vector <int> arr){

    int temp = arr[0];
    for (int i = 0; i < arr.size(); i++){
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = temp;

    for(int val : arr){
        cout<<val<<" ";
    }
    
    return {0};
}
int main () {
   
    vector<int> arr = {2, 5, 8, 11, 12, 14, 17};
    rotate(arr);
   return 0;
}