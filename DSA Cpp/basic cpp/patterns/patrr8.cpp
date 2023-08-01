#include<iostream>
using namespace std;
int main()
{
    int count = 5;
    for (int i = 0; i < count; i++)
    {
        int num = 1;
        for (int  j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int  j = 0; j < 2*count- (2 * i +1); j++)
        {
            
            cout<<num;
            num++;

        }
        for (int  j = 0; j < i; j++)
        {
            
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}