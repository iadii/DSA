#include<iostream>
using namespace std;
void printName(string name){
    cout<<"Hey "+name;
}
int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    printName(name);
    return 0;
}