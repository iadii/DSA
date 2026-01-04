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
    int p = 0, n = 0;
    for(int i = 0; i < arr.size(); i++){
        if (i % 2 == 0 && p < pos.size()) {
            arr[i] = pos[p++];
     }
        else if (i % 2 == 1 && n < neg.size()) {
            arr[i] = neg[n++];
        }
    }
    for(int n: arr){
        cout<<n<<" ";
    }
    return {};
}
int main () {
   
    vector<int> arr = {
        3,1,-2,-5,2,-4
    };

    ReArrange(arr);
     
   return 0;
}