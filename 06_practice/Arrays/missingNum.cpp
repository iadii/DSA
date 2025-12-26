#include<bits/stdc++.h>
vector <int> missingNum(vector<int> arr){
    int n = arr.size();
    int expSum = (n * (n + 1))/2;

    int actSum = 0;
    for(int i = 0; i < arr.size(); i++){
        actSum += arr[i];
    }
    return {expSum - actSum};
}
int main () {
   
    vector <int> arr = {9,6,4,2,3,5,7,0,1};

    vector<int> val = missingNum(arr);
    cout<<val[0];
   return 0;
} 