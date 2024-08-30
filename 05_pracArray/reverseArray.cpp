#include<iostream>
using namespace std;

int revArr(int arr[], int size){

    int rev[size];
    for(int i = 0; i < size; i++){
        rev[i] = arr[size - i - 1];
    }
    cout<<"real"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"reversed"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<rev[i]<<" ";
    }
    
}
int main()
{
    int arr[] = {20,30,40,50,60};

    int size = sizeof(arr)/sizeof(arr[0]);
    revArr(arr,size);
    return 0;
}