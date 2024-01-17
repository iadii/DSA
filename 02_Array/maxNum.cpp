#include<iostream>
using namespace std;
void max1(int arr[], int size, int maxn){

    for (int  i = 0; i < size; i++)
    {
        if(arr[i] > maxn){
            maxn = arr[i];
        }

    }
    cout<<maxn<<endl;
    

}
int main()
{
    int arr[] = {2,4,24,5,288,59,3,5,8};
    int size = 9;
    int maxn = arr[0];
    // int maxn = INT32_MIN;
    max1(arr, size, maxn);
    // cout<<maxn<<endl;

    return 0;
}