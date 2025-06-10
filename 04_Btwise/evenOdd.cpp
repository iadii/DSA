#include<bits/stdc++.h>
int main () {
   
    int num;
    cout<<"enter num: ";
    cin>>num;

    // traditional way

    if(num % 2 == 0){
        cout<<"Given num is even"<<endl;
    }
    else{
        cout<<"given num is odd"<<endl;
    }

    // bitwise way 
    // even -> last(right most) bit is always zero(0)
    // odd -> last(right most) bit is always one(1)

    if(num & 1 == 0){
          cout<<"Given num is even"<<endl;
    }
    else{
        cout<<"given num is odd"<<endl;
    }


   return 0;
}