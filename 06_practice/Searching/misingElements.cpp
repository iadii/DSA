#include<bits/stdc++.h>
vector<int> missigElement(vector<int> arr, target){
    
}
int main () {
     vector<int> arr = {1,2,3,4,6,7,8};

    int index = missingElement(arr);
    int missingValue = index + 1;  // Because arr[index] - index > 1, so missing is index + 1

    cout << "Missing element should be at index " << index << " and element is " << missingValue;
   
   return 0;
}