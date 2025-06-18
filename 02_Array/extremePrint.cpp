#include <bits/stdc++.h>
int main()
{

    int arr[] = {45, 12, 89, 34, 56, 23, 78, 90, 11, 7, 43, 21, 99, 55, 32};
    int size = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = size - 1;
    while (left <= right){

        if (left == right) {
        cout << arr[left] << " ";
    }
    else{
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";

    }
        left++;
        right--;

       
    }

        return 0;
}