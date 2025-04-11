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

    vector<int>::iterator iter = v.begin() + 2;

    v.insert(iter, 3, 100);

    for(auto x : v)
        cout<<x<<" ";
    cout<<nl;

    vector<int> v2;
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(300);

    iter = v2.begin() + 1;
    v2.insert(iter, v.begin(), v.end());

    for(auto x : v2)
        cout<<x<<" ";
    cout<<nl;
    
    return 0;
}
