#include<iostream>
using namespace std;

int fn(int arr[], int size){
    int bigg = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > bigg){
            bigg = arr[i];

        }
    }
    return bigg;
}

int main()
{
    int arr[] = {1, 8, 7, 56, 90};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = fn(arr, size);
    cout<<"biggest of em "<<ans;
    return 0;
}