#include <iostream>
#include <vector>
#define nl '\n'

using namespace std;

int main() 
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (auto x : v)
        cout<<x<<nl;
    cout<<nl;

    cout<<v.size()<<nl;
    cout<<v.capacity()<<nl;
    cout<<v.max_size()<<nl;
    
    return 0;
}
