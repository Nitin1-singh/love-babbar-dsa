#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;
int main() {
    array<int,3> arr;
    vector<int> vec;
    deque<int> deq;
    list<int> l;
    stack<int> st;
    queue<int> qq;
    set<int> s;
    map<int, string> m1;
    m1[1] = "love";
    for (auto i:m1)
    {
        cout<<"data = "<<i.first<<endl;
        cout<<"data = "<<i.second<<endl;

    }
    
    return 0;
}