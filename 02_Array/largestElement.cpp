#include<iostream>
using namespace std;
int main(){
  int arr[5] = {2,3,5,7,4};
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  
  int flag = 0;
  int largest = arr[0];
  for (int i ; i<=arrSize ; i++ ) {
    if(arr[i]>=largest){
      largest = arr[i];

    }
  }
  cout<<"largest is "<<largest;
}