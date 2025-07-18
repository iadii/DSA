#include<bits/stdc++.h>
int main () {

   int arr[3][3] = {
        {2, 4, 6},
        {8, 10, 102},
        {14, 16, 18}
    };

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i == j){
                sum += arr[i][j];
            }
        }
        
    }

    cout<<"sum is "<<sum;
    


   return 0;
}