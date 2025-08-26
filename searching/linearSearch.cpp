#include <bits/stdc++.h>
int linearSearch(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 45, 33, 12, 18, 2, 26};
    int target = 12;
    int index = linearSearch(arr, target);
    cout << target << " is at index " << index;

    return 0;
}