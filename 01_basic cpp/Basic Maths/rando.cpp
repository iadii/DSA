// write a program to fibonacci numbers using recursive functions
#include<iostream>
using namespace std;
void fib(int n){
    if(n == 0){
        cout<<"Fibonacci doesn\'t  exist!"<<endl;
    }
    else{
        return fib(n*(n-1));
    }
}
int main(){
    int num;
    fib(num);
    return 0;
}