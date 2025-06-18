#include<bits/stdc++.h>

int main () {
    int arr[] = {0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1};
    // This array has 6 zeros and 9 ones (irregular occurrence)

    int countOne = 0;
    int countZero = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 0){
            countZero++;
        }
        if(arr[i] == 1){
            countOne++;
        }
    }
    
    cout<<"Occurance of zero is: "<<countZero<<endl;
    cout<<"Occurance of one is: "<<countOne<<endl;
   
   return 0;
}