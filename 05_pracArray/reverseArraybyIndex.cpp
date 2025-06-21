// Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.
#include <bits/stdc++.h>
int reverseArr(int arr[], int size, int index){

    int left = index;
    int right = size - 1;

    while(left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}


int main(){

    int arr[] = {10, 20, 30, 40, 50, 60};

    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArr(arr, size, 2);

    return 0;
}