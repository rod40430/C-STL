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

    for (unsigned int i{}; i < v.size(); ++i)
        cout<<v[i]<<nl;
    
    return 0;
}
