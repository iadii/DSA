#include <bits/stdc++.h>   

int sortCol(vector<int> arr, int size)
{

    int left = 0;
    int right = size-1;
    int i = 0;
    while(i <= right)
        {
            if(arr[i] == 0){
                swap(arr[left], arr[i]);
                left++;
                i++;
            }
            else if(arr[i] == 2){
                swap(arr[right], arr[i]);
                right--; 
            }
            else{
                i++; 
            }
        } 

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    vector<int> arr =
        {
            2, 0, 2, 1, 1, 0
            // 2,0,1
        };

    sortCol(arr, arr.size());
    return 0;
}