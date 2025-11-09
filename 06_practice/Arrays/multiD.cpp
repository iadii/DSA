#include<bits/stdc++.h>
int multiD(vector <vector<int>> arr){

    for (int i = 0; i < 3; i++)
    {
        cout<<"{ ";
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<",";
        }
        cout<<" }";
        cout<<endl;
    }
    
}
int main () {
   
    vector <vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    multiD(arr);
   return 0;
}