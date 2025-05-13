#include<bits/stdc++.h>
int main () {

    int row = 5;
    int num = 1;
    
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){

            cout<<num;
            num++;
        }
        cout<<"\n";
    }
   return 0;
}