#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age <= 10){
        cout<<"You are kid";
    }
    else if((age <= 18) && (age > 10)){
        cout<<"You're a teenager";
    }
    else{
        cout<<"You're adult";
    }
    return 0; 
}