#include<bits/stdc++.h>
int main () {
   
    int row = 4;
    int col = 6;

    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            if(i == 0 || i == (row - 1)){
                cout<<"* ";
            }
            else{
                if(j == 0 || j == (col - 1)){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<"\n";
        
    }
   return 0;
}