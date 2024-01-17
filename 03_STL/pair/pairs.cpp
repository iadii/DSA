#include<iostream>
using namespace std;
int main()
{
    pair<int, int> p;
    p.first = 1;
    p.second = 2;

    // cout<<"{"<<p.first <<" "<<p.second<<"}";

    // pair<int, pair<int,int> > pt = {5,{6,7}};
    // pair<int, pair<int,int> > pt;

    // pt.second.second = 7;
    // pt.second.first = 6;
    // pt.first = 5;
    // cout<<"{"<<pt.first <<", {"<<pt.second.first<<", "<<pt.second.second<<"}}";


    pair<int, int> prr[] = {{1, 2}, {3, 4}, {5, 6}};

    prr[1].second = 9;

    for (int i = 0; i < 3; i++) {
        cout << "{" << prr[i].first << ", " << prr[i].second << "}" << endl;
    }
    

    return 0;
}