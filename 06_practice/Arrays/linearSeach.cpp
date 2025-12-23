#include<bits/stdc++.h>
vector<int> search(vector<int> arr, int item){

    for (int i = 0; i < arr.size(); i++){

        if(arr[i] == item){
            return {i};
        }
    }
    
    return {-1};
}
int main () {
   
    vector<int> arr = {2, 5, 8, 11, 12, 14, 17};
    int item = 12;

    vector<int> value = search(arr, item);

    cout<<item<<" found at index "<<value[0];
   return 0;
}