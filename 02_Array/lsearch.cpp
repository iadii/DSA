#include<iostream>
using namespace std;
int main()
{
    int size, key;
    cout<<"Enter the no of element you want to store: ";
    cin>>size;
    int arr[size]; //bad practice for this we can use vector
    

    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the no you want to find: ";
    cin>>key;
    int count;
    for(int i=0; i<size; i++){
        if(key == arr[i]){
            count++;
        }
        
    }

    if(count > 0){
        cout<<"Key found "<<key;
        cout<<"Key found at "<<key;
    
    }
    else{
        cout<<"Key not found "<<key;
    }

    return 0;
}