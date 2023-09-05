#include<iostream>
using namespace std;
int main()
{

    int arr[] = {1,2,3,4,5,6,7,8,9};
    // int size = 9;
    int size = sizeof(arr)/sizeof(arr[0]);;
    int start = 0;
    int end = size-1;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    while (start <= end)   
    {
    

        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    cout<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}