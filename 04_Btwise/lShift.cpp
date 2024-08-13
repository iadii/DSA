// Left shift (<<)
// The left shift(<<) is a binary operator that takes two numbers, left shifts the bits of the first operand, and the second operand decides the number of places to shift. In other words, left-shifting an integer “a” with an integer “b” denoted as ‘(a<<b)’ is equivalent to multiplying a with 2^b (2 raised to power b). 

#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int lShift = a << 2;
    cout<<lShift;
    return 0;
}