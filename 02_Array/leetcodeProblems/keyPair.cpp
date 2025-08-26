#include<bits/stdc++.h>

// Efficient solution -> O(nlogn)
bool keyPair(vector<int> num, int target){

    sort(num.begin(), num.end());

    int left = 0;
    int right = num.size() -1;
    while(left < right){
        if(num[left] + num[right] == target){
            return true;
        }
        else if (num[left] + num[right] < target){
            left++;
        }
        else{
            right--;
        }
    }
    
    return false;
}

// inEfficient Solution -> O(n*n)
bool anotherWay(vector<int> arr, int target){

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if(arr[i] + arr[j] == target){
                return true;
            }
        }

        
    }
    return false;
    
}

int main () {
   
    vector<int> arr = {
        1,4,45,6,8,10
    };
    int target = 18;
    bool res = keyPair(arr, target);
    cout<<"response: "<<res<<endl;


    bool anotherRes = anotherWay(arr, target);
    cout<<"Inefficient way response: "<<anotherRes;
   return 0;
}