#include<bits/stdc++.h>
void zero(vector<int> arr){

    int left = 0;
    int right = arr.size() - 1;

    while(left <= right){
        if(arr[left] == 0){
            swap(arr[left], arr[right]);
            right--;
        }
        else{
            left++;
        }
    }

    for(int val: arr){
        cout<<val<<",";
    }
}
int main () {
   
    vector <int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    zero(arr);
   return 0;
}