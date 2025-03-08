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

    vector<int>::iterator iter {v.begin()};
    cout<<iter[0]<<nl;
    cout<<iter[1]<<nl;
    cout<<iter[2]<<nl;
    cout<<iter[3]<<nl;
    cout<<iter[4]<<nl<<nl;

    iter += 2;
    cout<<*iter<<nl<<nl;
    
    vector<int>::iterator iter2 = iter + 2;
    cout<<*iter2<<nl;
    
    return 0;
}
