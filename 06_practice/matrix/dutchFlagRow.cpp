#include<bits/stdc++.h>
using namespace std;
void dutchFlagRow(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low++], arr[mid++]);
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high--]);
        }
    }
}

void dutchFlagMatrix(vector<vector<int>>& mat) {
    for(auto& row : mat) dutchFlagRow(row);
}
int main() {
    vector<vector<int>> mat = {
        {2,0,2,1,1,0},
        {1,2,0,1,0,2},
        {0,1,2,0,2,1}
    };
    dutchFlagMatrix(mat);
    for(auto& row : mat) {
        for(int x : row) cout << x << " ";
        cout << endl;
    }
    return 0;
}
