#include<bits/stdc++.h>
int pivotIndex(vector<int> arr){

    
    for (int middle = 0; middle < arr.size(); ++middle) {
        int leftSum = 0;
        int rightSum = 0;
        for (int i = 0; i < middle; i++)
        {
            leftSum += arr[i];
        }
        for(int i = middle + 1; i < arr.size(); i++){
            rightSum += arr[i];
        }

        if(leftSum == rightSum){
            return middle;
        }
        
    }
    return -1;
}
int main () {
   
    vector<int> arr = {
        1,7,3,6,5,6
    };
    int index = pivotIndex(arr);
    cout<<index;
   return 0;
}