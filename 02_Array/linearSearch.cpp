#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int target){

    for (int  i = 0; i < size; i++)
    {
        if(target == arr[i]){
            return i;
            break;
        }
        
    }
    return -1;
}
int main () {

    int arr[] = {
        12, 23, 6, 89, 34, 78, 11, 55, 90, 3 , 45, 67, 42, 19, 81
    };
    int target = 45;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int indexofVal = linearSearch(arr, size, target);

    cout<<"index of value is "<<indexofVal;
    
    return 0;
}