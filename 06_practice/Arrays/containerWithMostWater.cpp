#include <bits/stdc++.h>

int maxArea(vector<int> arr)
{
    int left = 0;
    int right = arr.size() - 1;
    int max_area = 0;
    while (left < right)
    {
        int width = right - left;
        int h = min(arr[left], arr[right]);
        max_area = max(max_area, h * width);
        if (arr[left] < arr[right])
            left++;
        else
            right--;
    }
    return max_area;
}

int main()
{
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(arr) << endl;
    return 0;
}