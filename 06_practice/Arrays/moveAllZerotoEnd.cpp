#include<bits/stdc++.h>
int zeroToEnd(vector<int> arr){

    int start = 0;
    int end = arr.size() - 1;
    while(start < end){
        if(arr[start] == 0){
            swap(arr[start], arr[end]);
            end--; {/* because zero is already placed here so we will move to next */}
        }
       else{
         start++; {/* because element is already non zero so move to next */}
       }
    }

    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}
int main () {
   
    vector<int> arr = {1, 2, 0, 3, 0, 5, 0};
    zeroToEnd(arr);
   return 0;
}