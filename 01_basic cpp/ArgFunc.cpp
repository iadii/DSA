#include<iostream>
using namespace std;
int sum(int a,int b);
int main()
{
    int a, b;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    cout<<"Sum is "<<sum(a,b);
    return 0;
}
int sum(int a,int b){
    return a+b;
}