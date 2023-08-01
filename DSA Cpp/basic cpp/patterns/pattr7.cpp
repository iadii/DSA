#include<iostream>
using namespace std;
int main()
{
    int count = 5;
    for (int i = 0; i < count; i++)
    {
        int num = 1;
        for (int  j = 0; j < count - i - 1; j++)
        {
            cout<<" ";
        }
        for (int  j = 0; j < 2 * i - 1; j++)
        {
            
            cout<<num;
            num++;

        }
        for (int  j = 0; j < count - i - 1; j++)
        {
            
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}