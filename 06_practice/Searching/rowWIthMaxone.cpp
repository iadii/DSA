#include<bits/stdc++.h>
vector<int> rr(vector<vector<int>> arr){

    int countOne = 0;
    int rowNum = -1;

    for(int i = 0; i < 5; i++){
        int tempCount = 0;
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 1){
                tempCount++;
            }

            if(tempCount > countOne){
                countOne = tempCount;
                rowNum = i;
            }
        }
    }

    cout<<"count one is "<<countOne<<endl;
    cout<<"row number  is "<<rowNum<<endl;
    return {};
}
int main () {
   
    vector<vector<int>> mat = {
        {0,0,1,0},
        {0,0,0,1},
        {0,1,1,0},
        {0,1,1,1},
        {0,0,0,0}
    };
    rr(mat);
   return 0;
}