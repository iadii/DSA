#include<bits/stdc++.h>
int main () {
   
   int arr[] = {12, 7, 23, 44, 5, 18, 31, 2, 9, 27, 36, 14, 8, 21, 50};
   int size = sizeof(arr) / sizeof(arr[0]);

   int sumEven = 0;
   int sumOdd = 0;

   for (int i = 0; i < size; i++)
   {
        if(i % 2 == 0){
            sumEven += arr[i];
        }
        else if(i % 2 != 0){
            sumOdd += arr[i];
        }
   }

   cout<<"sum of even number is: "<<sumEven<<endl;
   cout<<"sum of odd number is: "<<sumOdd<<endl;
   
   return 0;
}