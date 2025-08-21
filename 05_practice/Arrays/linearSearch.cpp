#include<bits/stdc++.h>

int linearSearch(vector<int>arr, int item){

    for(int i = 0; i < arr.size(); i++){

        if(item == arr[i]){
            return i;
        }
    }
    return -1;
}
int main () {
   vector<int> num = {
    2, 7, 34, 21, 5, 8, 19, 3, 45, 27, 10, 16, 6, 38, 2
   };

   int item = 27;
   int index = linearSearch(num, item);
   cout<<"index of given item is: "<<index;

   return 0;
}