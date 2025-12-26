#include<bits/stdc++.h>
vector<int> findUnique(vector<int> arr){

    int unique = 0;
    for(int i = 0; i < arr.size(); i++){
        unique ^= arr[i];
    }

    return {unique};

}
int main () {
   vector<int> arr = { 3, 5, 3, 8, 5, 9, 8 };
//    vector<int> arr = { 0,0,1,4,2,2,3,3,4 };
   vector<int> val = findUnique(arr);
   cout<<"unique element is : "<<val[0]<<" ";
   return 0;
}