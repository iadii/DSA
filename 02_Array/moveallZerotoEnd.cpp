#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[] = {
    1, 2, 0, 3, 5, 0, 4
   };
   int size = sizeof(arr)/sizeof(arr[0]);
   int left = 0;
   int right = size - 1;
    while(left < right){
        if(arr[left] == 0){
            swap(arr[left], arr[right]);
            right--;
        }
        left++;
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}
