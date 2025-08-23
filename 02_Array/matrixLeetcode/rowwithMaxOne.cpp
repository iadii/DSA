#include <bits/stdc++.h>
vector<int> rowMaxOne(vector<vector<int>> mat)
{

    int rows = mat.size();
    int cols = mat.empty() ? 0 : mat[0].size();

    int rowIndex = -1;
    int maxOne = 0;

    for (int i = 0; i < rows; i++){
        
        int countone = 0;
        for(int val: mat[i]){
            if(val == 1){
                ++countone;
            }
            if(countone > maxOne){
                maxOne = countone;
                rowIndex = i;
            }
        }
    }
    
    cout << "count one " << maxOne << endl;
    cout << "row index " << rowIndex << endl;

    return {0, 0};
}
int main()
{

    // vector<vector<int>> mat = {{0,  0, 0}, {0, 1, 1}, {1, 1, 1}};
    vector<vector<int>> mat = {{0, 0, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}, {1, 1, 1, 1}};

    rowMaxOne(mat);

    return 0;
}