#include <bits/stdc++.h>
vector<int> twoSum(vector<int> arr, int target){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 1; j < arr.size(); j++){
            if(arr[i] + arr[j] == target){
                return {i, j};
            }
        }
    }
    return {-1};
}
int main(){

    vector<int> arr = {2, 7, 11, 15};
    int target = 18;
    vector<int> val = twoSum(arr, target);
    
    for(int val : val){
        cout<<val<<" ";
    }
    
    return 0;
}