#include<iostream>
using namespace std;
int main(){
  int arr[5] = {2,3,4,5,6};
  int arrSize = sizeof(arr)/sizeof(arr[0]);


 for(int i = 0; i<arrSize; i++){
   cin>>arr[i];

 }
 for(int i = 0; i<arrSize; i++){
   arr[i] = 1;

 }
 for(int i = 0; i<arrSize; i++){
   cout<<arr[i];

 }
  
  int arr1[10] = {1,2};
  for(int i = 0; i< 10; i++){
    cout<<arr1[i]<<" ";
  }
}