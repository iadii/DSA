#include<bits/stdc++.h>

int rotateByK(vector<int> arr, int k){

    vector<int> temp(k);
    for(int i = 0; i < k; i++){
        temp[i] = arr[arr.size() - k + i];
    }

    for (int i = arr.size(); i > 0; i--)
    {
         arr[i] = arr[i - k];
    }
    
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
    

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

void anotherWay(vector<int> nums, int k){

    int size = nums.size();
    vector<int> ans(size);

    for(int i = 0; i < size; i++){
        int index = (i + k) % size;
        ans[index] = nums[i];
    }
    nums = ans;
}
int main () {

    vector<int> arr = {
        1,2,3,4,5,6,7
    };

    int k = 3;
    rotateByK(arr, k);
   
   return 0;
}