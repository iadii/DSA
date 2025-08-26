#include<bits/stdc++.h>
int main () {
   int a = 5;
   int b = 6;

   int res = a ^ b;

//    cout<<res<<endl;

   int dynamicVal;
   cout<<"enter Dynamic value: ";
   cin>>dynamicVal;

   int sameRes = a ^ dynamicVal;
   cout<<sameRes;



   return 0;
}