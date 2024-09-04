#include<iostream>
using namespace std;
// using namespace adii;
namespace adii{
    void display(string xyz){
        cout<<xyz<<endl;
    }
}
int main()
{   
    adii::display("Hello");
    adii::display("hii");
    return 0;
}