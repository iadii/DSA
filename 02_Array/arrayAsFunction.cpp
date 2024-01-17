#include<iostream>
using namespace std;

void display(int arr[], int size){
    cout<<arr[0]<<" "<<arr[1];
}
void funn(int arr[], int size){

    arr[0] += 10;
    cout<<arr[0]<<" ";
    display(arr, size);

}
int main()
{
    int arr[2] = {2,3};
    int size = 2;
    cout<<arr[0]<<" "<<arr[1]<<endl;

    funn(arr, size);
    // display(arr, size);
    // cout<<arr[0]<<" "<<arr[1];
    cout<<arr[0]<<" "<<arr[1]<<endl;

    return 0;
}
