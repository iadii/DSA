#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "The value stored at address: "<<&a<<" is "<<(*(&a));
    return 0;
}
