#include<iostream>
using namespace std;
void pattr1(int count){
    int i = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }

    // while (i < count)
    // {
    //     int j = 0;
    //     while (j < count-1)
    //     {
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
}
void pattr2(int count){
    int i, j;
    for (i = 0; i < count; i++) 
    {
        for ( j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}
void pattr3(int count){
    int num = 1;
    for (int i = 0; i < count; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
        num++;

    }
    
}
void pattr4(int count){
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
void pattr5(int count){
    for (int i = 0; i < count; i++)
    {
        int num = 1;

        for (int j = 0; j < count -i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
}
int main()
{
    int count =  5;
    // pattr1(count);
    pattr5(count);

    return 0;
}