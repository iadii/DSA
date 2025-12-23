#include<bits/stdc++.h>
vector<int> count(vector <int> arr){

    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % 2 == 0){
            countEven++;
        }
        else if(arr[i] % 2 != 0){
            countOdd++;
        }
    }
    return {countEven, countOdd};
    
}
int main () {
   
   vector<int> arr = {2, 5, 8, 11, 14, 17};

   vector<int> val = count(arr);
   
   cout<<"count of even numbers :"<<val[0]<<endl;
   cout<<"count of odd numbers :"<<val[1];
   return 0;
}