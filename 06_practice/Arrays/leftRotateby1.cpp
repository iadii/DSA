#include<bits/stdc++.h>
vector<int> leftRotate(vector<int> arr){

    int n = arr.size();
    int temp = arr[arr.size() - 1];
    for (int i = n - 1; i > 0; i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;

    for(int num:arr){
        cout<<num<<" ";
    }
    return {};
}
int main () {
   
    vector<int> arr = {11, 41, 5, 8, 20};
    leftRotate(arr);
   return 0;
}