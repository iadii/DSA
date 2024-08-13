#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 6;

    int xoR = (a^b);
    // int xnor = ~xoR; //NOT of XOR result: 1100...1100 (varies by system, -4 in decimal for 32-bit int)
    // so for 64 bit

    int xnor = ~xoR & 0xFFFFFFFF;

    cout<<"xor: "<<xoR<<endl;
    cout<<"xnor: "<<xnor<<endl;

    return 0;
}