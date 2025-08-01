#include<bits/stdc++.h>
int main () {

    // vector

    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int> arr(n);


    // pushing element in vector
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(11);
    arr.push_back(13);

    // popping last element
    arr.pop_back();

    // empty the vector
    // arr.empty();

    // find the size of vector
    // howmany elements it currently has
    cout<<arr.size();

    // capacity of vector
    // it means how many elemnt it can currently hold
    cout<<arr.capacity();
    
   return 0;
}