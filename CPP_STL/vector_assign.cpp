#include <iostream>
#include <vector>
#define nl '\n'

using namespace std;

int main() 
{
    vector<int> v(5, 1);

    for (auto x : v)
        cout<<x<<nl;
    cout<<nl;

    v.assign(5, 2);
    for (auto x : v)
        cout<<x<<nl;
    
    return 0;
}
