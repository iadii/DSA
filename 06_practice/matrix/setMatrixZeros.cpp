#include<bits/stdc++.h>
using namespace std;

void setMatrixZeros(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();
    
    set<int> zeroRows, zeroCols;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == 0){
                zeroRows.insert(i);
                zeroCols.insert(j);
            }
        }
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(zeroRows.count(i) || zeroCols.count(j)){
                arr[i][j] = 0;
            }
        }
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };
    
    cout << "Matrix after setting zeros:" << endl;
    setMatrixZeros(arr);

    return 0;
}
