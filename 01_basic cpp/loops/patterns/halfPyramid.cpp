#include<bits/stdc++.h>
int main () {
   
    int row = 5;
    int col = 6;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        
    }
    
   return 0;
}