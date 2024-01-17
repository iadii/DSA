#include<iostream>
using namespace std;
int count(int arr[], int size, int zero , int  one){

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 0){
            zero++;
        }
        else{
            one++;
        }
    }
    cout<<"count of zero: "<<zero<<endl;
    cout<<"count of one:  "<<one<<endl;
}
int main()
{
    int arr[] = {0,1,0,0,0,1,1,1,0,0,0,0,1};
    int size = 13;
    int zero = 0;
    int one = 0;
    count(arr, size, zero, one);

    return 0;
}