#include<bits/stdc++.h>
int main () {
   
    vector<int> arr = {
        10,20,30,40,50
    };

    int left = 0;
    int right = arr.size() -1;

    while(left < right){

        swap(arr[left], arr[right]);

        left++;
        right--;
    }

    for(int num: arr){
        cout<<num<<" ";
    }
    
   return 0;
}