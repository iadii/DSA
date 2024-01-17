#include <cstring>
#include<iostream>
using namespace std;
int main(){
//  int arr[10];
char ch[10];
  memset(ch, 'A    ', sizeof(ch));
  
  for (int i = 0; i<10; i++){
    cout<<ch[i]<<" ";
  }
}