#include<iostream>
using namespace std;

int fn(int arr[], int size){

        int largest = arr[0];
        int secLargest = arr[0];
        for(int i = 0; i < size; i++){
            if(arr[i] > largest){
                secLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secLargest){
                secLargest = arr[i];
            }
        }
        return secLargest;
    
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = fn(arr, size);
    cout<<"Second biggest of em "<<ans;
    return 0;
}