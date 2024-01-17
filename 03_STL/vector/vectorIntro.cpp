// vector is known as dynamic array
// like array it is also use contiguous memory location
// but whenever values of vector exceeds the capacity of vector
// then vector double it's capacity dynamically (at run time) so it can store all the values
// to double it's capacity, vector creates new array which is double in capacity of old one
// when it double it's capacity then values of old vector copied in the new vector and it will dump the old one
// it can also shrink it's capacity
// capacity of new vector is always zero

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    cout << "capacity of vector => " << v.capacity() << endl;
    // capacity of vector => 0

    // to inserting the element in vector we push_back()
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    cout << "capacity of vector => " << v.capacity() << endl;
    // capacity of vector => 4

    v.push_back(2);
    cout << "capacity of vector => " << v.capacity() << endl;
    // capacity of vector => 8

    // size() means how many element presented at this time in vector
    cout << "size of vector => " << v.size() << endl;
    // size of vector => 5
    // because 5 elements are there in vector at this moment

    cout << "Element at 2nd Index => " << v.at(2) << endl;

    // it will return 1(true) or 0(false )
    cout << "Empty or not => " << v.empty() << endl;

    cout << "First element => " << v.front() << endl;

    cout << "last Element => " << v.back() << endl;

    cout << "before pop_back";

    for (int i : v)
    {
        cout << i << " ";
    }

    // it will delete the last element of vector
    v.pop_back();

    cout << "after pop_back";

    for (int i : v)
    {
        cout << i << " ";
    }

    // we can clear the vector means delete all the elements of vector
    // after clear() vector size will zero but capacity will be same as previous
    // capacity will not shrink

    cout << "before clear size => " << v.size() << endl;
    cout << "before clear capacity => " << v.capacity() << endl;

    v.clear();

    cout << "after clear size => " << v.size() << endl;
    cout << "after clear capacity => " << v.capacity() << endl;

    // int this vector will be size of 5 with all the value will be 1
    // by default it will be zero
    vector<int> a(5, 1);


    // in this all the value of vector a will be copied to vector b
    vector<int> b(a);
    b.push_back(7);
     for (int i : b)
    {
        cout << i << " ";
        // 1 1 1 1 1 7
    }

}