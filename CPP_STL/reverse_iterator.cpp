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

    reverse_iterator<vector<int>::iterator> riter(v.end());
    reverse_iterator<vector<int>::iterator> end_riter(v.begin());

    for (; riter != end_riter; ++riter)
        cout<<*riter<<nl;
    cout<<nl;

    
    return 0;
}
