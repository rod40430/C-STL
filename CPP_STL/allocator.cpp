#include <iostream>
#include <vector>
#include <set>
#define nl '\n'

using namespace std;

int main() 
{
    // vector<typename T, typename Alloc = allocator<T>>
    // vector<int>와 같음
    vector<int, allocator<int>> v;
    v.push_back(10);
    cout<<*v.begin()<<nl;

    // set<typename T, typename Pred = less<T>,
    // typename Alloc = allocator<T>>, set<int>와 같음
    set<int, less<int>, allocator<int>> s;
    s.insert(10);
    cout<<*s.begin()<<nl;
    
    return 0;
}
