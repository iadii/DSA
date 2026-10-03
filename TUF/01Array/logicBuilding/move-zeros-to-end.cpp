#include<bits/stdc++.h>
vector<int> moveZero(vector<int> arr){
    vector<int> temp;
    for(int i = 0; i < arr.size(); i++ ){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    while(temp.size() < arr.size()){
        temp.push_back(0);
    }
    for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i];
        }

    for(int nums: arr){
        cout<<nums<<" ";
    }
    return {};
}
int main () {
    vector <int> arr = {0, 1, 4, 0, 5, 7, 2};
    moveZero(arr);
   return 0;
}