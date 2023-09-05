#include<iostream>
using namespace std;
// int find(int arr[], int size, int key){
//     for (int i = 0; i < size; i++)
//     {
//         if (key == arr[i])
//         {
//             return key;
//         }
        
//     }
    
    
// }
bool find(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return true;
        }
        
    }
    
    return false;
}
int main()
{
    int arr[6] = {7,34,24,24,2};
    int size = 5, key;
    cout<<"Enter Key to find the element: ";
    cin>>key;
    if(find(arr, size, key)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}