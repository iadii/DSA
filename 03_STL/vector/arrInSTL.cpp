#include<iostream>
using namespace std;
int main()
{
    // Syntax
    // array<dataType, size> variableName = value 

    // array 1
    int arr[3] = {1,2,3};

    // so this doesn't support size method
    // int basesize = arr.size();
    for (int i = 0; i < 3; i++)
    {
        // cout<<arr[i];
    }
    
    
    // array 2
    // it is also a static array 
    // stl array implemented on basic array

    array<int , 5> brr = {7,2,4,6,9};
    // it does support the size method
    int size = brr.size();

    for (int i = 0; i < size; i++)
    {
        cout<< brr[i]<<endl;
    }
    
    cout<<"Element at 2nd Index => "<<brr.at(2)<<endl;

// it will return 1(true) or 0(false )
    cout<<"Empty or not => "<<brr.empty()<<endl;

    cout<<"First element => "<<brr.front()<<endl;

    cout<<"last Element => "<<brr.back()<<endl;
}