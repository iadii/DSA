#include<bits/stdc++.h>

int unique(int arr[], int size){
    
    for (int i = 0; i < size; i++){
        bool found = false;
        for (int j = 0; j < size; j++){
            if(i != j && arr[i] == arr[j]){
               found = true;
            }
        }
        if (!found) {
            return i;
        }

        
    }
    return -1;
     
}

int usingXor(int arr[], int size){
    int uniqueVal = 0;
    for (int i = 0; i < size; i++)
    {
        uniqueVal ^= arr[i];        
    }
    return uniqueVal;
    
}
int main () {
   int arr[] = {6, 2, 5, 2, 2, 6, 6};
   int size = sizeof(arr) / sizeof(arr[0]);

   int val = unique(arr, size);
   cout<<"unique value is: "<<arr[val]<<endl;


   int XorVal = usingXor(arr, size);
   cout<<"unique value is using xor: "<<arr[XorVal];

   

   return 0;
}