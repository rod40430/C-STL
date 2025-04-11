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

    vector<int>::iterator iter;
    vector<int>::iterator iter2;
    for(auto x : v)
        cout<<x<<" ";
    cout<<nl;

    iter = v.begin() + 2;
    iter2 = v.erase(iter);
    for(auto x : v)
        cout<<x<<" ";
    cout<<nl;

    iter2 = v.erase(v.begin() + 1, v.end());
    for(auto x : v)
        cout<<x<<" ";
    cout<<nl;
    
    return 0;
}
