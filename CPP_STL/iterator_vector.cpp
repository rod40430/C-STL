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
    for (iter = v.begin(); iter != v.end(); ++iter)
        cout<<*iter<<nl;
    
    return 0;
}
