#include<bits/stdc++.h>
int count(vector<int> arr){

    int countEven = 0;
    int countOdd = 0;
    for (int i = 0; i < arr.size(); i++){

        (arr[i] % 2 == 0) ? countEven++ : countOdd++; 
    }

    cout<<"Count of even num is: "<<countEven<<endl;
    cout<<"Count of odd num is: "<<countOdd<<endl;
    
    return 0;
}
int main () {
   
    vector<int> arr = {
       2, 7, 34, 21, 5, 8, 19, 3, 45, 27, 10, 16, 6, 38, 2
    };

    count(arr);
   return 0;
}