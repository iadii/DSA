#include<bits/stdc++.h>
vector <int> rightRotate(vector <int> arr){

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
vector <int> leftRotate(vector <int> arr){

    int temp = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    for(int val : arr){
        cout<<val<<" ";
    }
    
    return {0};
}


int main () {
   
    vector<int> arr = {2, 5, 8, 11, 12, 14, 17};
    rightRotate(arr);
    cout<<endl;
    leftRotate(arr);
   return 0;
}