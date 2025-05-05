// display n Terms of Natural Numbers and Their Sum
#include<bits/stdc++.h>
int main () {
   
    int num = 10;
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        cout<<i<<"\t";
        sum += i;

    }
    cout<<"\n"<<"sum of n natual number: "<<sum<<"\t";
    
   return 0;
}