// Right Shift(>>)
// Right Shift(>>) is a binary operator that takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift. In other words, right-shifting an integer “a” with an integer “b” denoted as ‘(a>>b)‘ is equivalent to dividing a with 2^b. 


#include<iostream>
using namespace std;
int main()
{
    int a = 18;
    int rShift = a >> 2;
    
    cout<<rShift;

    return 0;
}