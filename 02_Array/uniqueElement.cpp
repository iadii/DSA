#include<bits/stdc++.h>

using namespace std;

int uniqueElement(int arr[], int size){

    int unique = 0;
    for(int i = 0; i < size; i++){
        unique ^= arr[i];

    }
    return unique;
}

int diffWay(int arr[], int size){
    for (int i = 0; i < size; i++) {
        int count = 0;  // Reset count for each element
        for (int j = 0; j < size; j++) {
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){  
            return arr[i];
        }
    }
    return -1;  
}

int main () {
   
    int arr[] = {2, 1, 3, 5, 2, 1, 4, 8, 4, 3, 8, 9, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int val = uniqueElement(arr, size);

    int otherVal = diffWay(arr, size);

    cout<<"unique element is: "<<val<<endl;
    cout<<"unique element is: "<<otherVal;
    return 0;
}