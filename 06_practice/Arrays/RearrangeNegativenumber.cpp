#include<bits/stdc++.h>
vector<int> ReArrange(vector<int> arr){
    vector<int> neg;
    vector<int> pos;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < 0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }

    for(int i:neg){
        cout<<i<<" ";
    }
    return {}
}
int main () {
   
    vector<int> arr = {
        3,1,-2,-5,2,-4
    };

     
   return 0;
}