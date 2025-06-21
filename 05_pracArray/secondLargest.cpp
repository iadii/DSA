#include<bits/stdc++.h>

int secondLargest(int arr[], int size){

    int large = INT_MIN;
    int secondL = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > large){
            large = arr[i];
        }
       
    }
    for (int i = 0; i < size; i++){

         if((arr[i] > secondL )&& (arr[i] < large)){
            secondL = arr[i];
        }
    }
    
    // return secondL;
    // return -1 if there is no second largest value eg (1,1);
    return secondL > INT_MIN ? secondL : -1;

}

int main () {
   
   int arr[15] = {23, 87, 12, 45, 67, 34, 90, 56, 78, 11, 39, 62, 5, 73, 28};
   int size = sizeof(arr) / sizeof(arr[0]);

   int result = secondLargest(arr, size);

   cout<<"Second largest element is: "<<result;
   return 0;
}