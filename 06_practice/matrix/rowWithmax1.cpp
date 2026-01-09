#include<bits/stdc++.h>
vector<int> rowMaxOne(vector<vector<int>> mat){
    
    int row = mat.size();
    int col = mat[0].size();

    int oneCount = INT_MIN;
    int rowsNo = - 1;
    for(int i = 0; i < row; i++){
        int count = 0;

        for(int j = 0; j < col; j++) {
            if(mat[i][j] == 1){
                count++;
            }
        }
        if(count > oneCount){
            oneCount = count;
            rowsNo = i;
        }

    }
    return {oneCount, rowsNo};

}

int main () {
   
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {1, 1, 1, 0},
        {0, 0, 1, 0}
    };  

    vector<int> val = rowMaxOne(mat);

    cout<<"count of one is "<<val[0]<<" in row "<<val[1];

   return 0;
}