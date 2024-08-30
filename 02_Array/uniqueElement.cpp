#include<iostream>
using namespace std;
int unique(int arr[], int size){

    int kth = 0;
    for(int i = 0; i < size; i++){
        kth = kth ^ arr[i];
    }
    return kth;
}
int main()
{
    int arr[] = {2, 4, 3, 5, 2, 1, 4, 3, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int uni = unique(arr, size);
    cout<<uni;
    return 0;
}