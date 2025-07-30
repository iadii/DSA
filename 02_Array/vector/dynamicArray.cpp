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
   // Dynamically allocate array of size 'num'
   // if we dont put any element then default value would be 0 or garbage value
   int* arr = new int[num]; 
   dynamic_Arr(arr, num); 
   
   return 0;
}