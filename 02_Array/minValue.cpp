#include<bits/stdc++.h>

int minValue(int arr[], int size){

    // INT_MAX is better to use here
    // because we want to find lowest value here
    // and we don't which number is lowest here, so
    int lowestVal = INT_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < lowestVal){
            lowestVal = arr[i];
        }
    }
    return lowestVal;

}
int main () {
   
   int arr[] = {45, 12, 89, 34, 56, 23, 78, 90, 11, 7, 43, 21, 99, 55, 32};
   int size = sizeof(arr) / sizeof(arr[0]);

   int min = minValue(arr, size);
   cout<<"Lowest Value in array is: "<<min<<endl;
   
   return 0;
}