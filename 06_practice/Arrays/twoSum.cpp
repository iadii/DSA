#include<bits/stdc++.h>
vector<int> twoSum(vector<int> arr, int target){

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if(arr[i] + arr[j] == target){
                return {i, j};
            }
        }
        
    }
    
    return {};
}
int main () {
    vector<int> arr = {2,7,11,15};
    int target = 26;
    vector<int> result = twoSum(arr, target);

    cout << "Indices: " << result[0] << " " << result[1] << endl;
    cout << "Values: " << arr[result[0]] << " " << arr[result[1]] << endl;

   return 0;
}