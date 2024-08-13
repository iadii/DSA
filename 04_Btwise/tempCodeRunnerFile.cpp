#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 6;

    int xoR = (a^b);
    int xnor = ~xoR;

    cout<<"xor: "<<xoR<<endl;
    cout<<"xnor: "<<xnor<<endl;
    
    return 0;
}