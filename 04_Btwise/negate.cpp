// #include <iostream>

// int main() {
//     int num = 5;
//     // int negativeNum = ~num + 1;
//     int negativeNum = num * -1;

//     std::cout << "Original number: " << num << std::endl;
//     std::cout << "Negative number: " << negativeNum << std::endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int bitwiseAdd(int a, int b) {
    while (b != 0) {
        // carry now contains common set bits of a and b
        int carry = a & b;
        
        // Sum of bits of a and b where at least one of the bits is not set
        a = a ^ b;
        
        // Carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }
    return a;
}

int main() {
    int num = 5;
    
    // Step 1: Find the one's complement
    int onesComplement = ~num;
    cout<<"onesComplement"<<onesComplement<<endl;                                                                                                                         
    
    // Step 2: Add 1 to the one's complement using bit manipulation
    int negativeNum = bitwiseAdd(onesComplement, 1);
    
    std::cout << "Original number: " << num << std::endl;
    std::cout << "Negative number: " << negativeNum << std::endl;
    
    return 0;
}
