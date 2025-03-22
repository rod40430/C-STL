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

    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout<<*iter<<nl;
    cout<<nl;

    vector<int>::reverse_iterator riter(v.rbegin());
    for (; riter != v.rend(); ++riter)
        cout<<*riter<<nl;
    cout<<nl;
    
    return 0;
}
