#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Empty vector
    vector<int> v1;

    // 2. Vector with n elements, all 0
    vector<int> v2(5);

    // 3. Vector with n elements, all initialized to a value
    vector<int> v3(5, 7);

    // 4. Vector initialized from array
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v4(arr, arr + 5);

    // 5. Vector initialized using initializer list
    vector<int> v5 = {10, 20, 30, 40};

    // 6. Copy constructor
    vector<int> v6(v5);

    // 7. Assignment operator
    vector<int> v7 = v3;

    // Demonstrate functions
    v1.push_back(100); // Add element
    v1.push_back(200);

    cout << "v1: ";
    for (int x : v1) cout << x << " ";
    cout << endl;

    cout << "v3[2]: " << v3[2] << endl; // Access by index
    cout << "v3.at(2): " << v3.at(2) << endl; // Safe access

    cout << "v5 front: " << v5.front() << ", back: " << v5.back() << endl;

    v5.pop_back(); // Remove last
    cout << "v5 after pop_back: ";
    for (int x : v5) cout << x << " ";
    cout << endl;

    v5.insert(v5.begin() + 1, 99); // Insert at position
    cout << "v5 after insert: ";
    for (int x : v5) cout << x << " ";
    cout << endl;

    v5.erase(v5.begin() + 2); // Erase at position
    cout << "v5 after erase: ";
    for (int x : v5) cout << x << " ";
    cout << endl;

    cout << "v5 size: " << v5.size() << ", capacity: " << v5.capacity() << endl;

    v5.clear(); // Remove all elements
    cout << "v5 empty after clear? " << (v5.empty() ? "Yes" : "No") << endl;

    return 0;
}