#include<iostream>
using namespace std;
int main(){
  int arr[5];
  int arrSize = sizeof(arr)/sizeof(arr[0]);

  
  for(int i = 0; i<arrSize; i++){
    cin>>arr[i];
    
  }
  for(int i = 0; i<arrSize; i++){
    cout<<2*arr[i]<<"\t";

  }
}