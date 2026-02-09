#include<bits/stdc++.h>
vector<int> missingElement(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int ans = 0;
    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == mid + 1){
            s = mid + 1;
        }
        else{
            ans = mid;
            e = mid - 1;
        }
        
    }
    return { ans };
}
int main () {

    vector<int> arr = {
        1,2,3,4,6,7,8,9
    };
    vector<int> val = missingElement(arr);
    cout<<"missing element is at: "<<val[0]<<" and value is: "<<val[0] + 1;
   return 0;
}