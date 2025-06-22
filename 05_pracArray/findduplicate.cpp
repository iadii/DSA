#include<bits/stdc++.h>

int findDuplicate(int arr[], int size){
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i != j && arr[i] == arr[j]){
                return i;
            }
        }
        
    }
    
    return -1;

}

int main () {

    int arr[] = {1, 3, 4, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

   int index = findDuplicate(arr, size);
   cout<<"duplicate value is: "<<arr[index];
   return 0;
}