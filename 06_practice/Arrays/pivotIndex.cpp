#include<bits/stdc++.h>
vector <int> pivotIndex(vector<int> arr){

    for(int mid = 0; mid < arr.size(); mid++){
        int leftSum = 0;
        int rightSum = 0;

        for(int i = 0; i < mid; i++){
            leftSum += arr[i];
        }
        for(int i = mid + 1; i < arr.size(); i++){
            rightSum += arr[i];
        }

        if(leftSum == rightSum)
            return {mid};
    }
    
    return {-1};
}
int main () {
   
    vector<int> arr = {
        1,7,3,6,5,6
    };
    vector <int> index = pivotIndex(arr);
    cout<<index[0];
   return 0;
}