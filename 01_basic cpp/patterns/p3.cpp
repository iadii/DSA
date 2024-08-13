// 1
// 2 2 
// 3 3 3
#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 6; i++){
        for(int j = 0; j < i; j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}