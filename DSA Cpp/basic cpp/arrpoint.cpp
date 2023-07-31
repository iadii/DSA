#include<iostream>
using namespace std;
int main(){

    int arr[] = {99, 100, 88, 77};
    int *p = arr;
    cout<<"mark[1] "<<*(p+1)<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"value of marks "<<*(p+i)<<endl;
    // }
    

    return 0;
}