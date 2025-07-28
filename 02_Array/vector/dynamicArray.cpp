#include<bits/stdc++.h>

using namespace std;

int dynamic_Arr(int arr[],int num){
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main () {
   int num;
   cin>>num;
   int* arr = new int[num]; // Dynamically allocate array of size 'num'
   dynamic_Arr(arr, num); // Call function to input and print array
   return 0;
}