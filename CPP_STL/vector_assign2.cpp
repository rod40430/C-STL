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

    vector<int> v2(v.begin(), v.end());
    for(auto x : v2)
        cout<<x<<" ";
    cout<<nl;

    vector<int> v3;
    v3.assign(v.begin(), v.end());
    for(auto x : v3)
        cout<<x<<" ";
    cout<<nl;
    
    return 0;
}
