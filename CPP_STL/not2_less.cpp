#include <iostream>
#include <functional>
#define nl '\n'

using namespace std;

int main() 
{
    cout<<less<int>() (10, 20)<<nl;
    cout<<less<int>() (20, 20)<<nl;
    cout<<less<int>() (20, 10)<<nl;
    cout<<"================"<<nl;

    cout<<not2(less<int>()) (10, 20)<<nl;
    cout<<not2(less<int>()) (20, 20)<<nl;
    cout<<not2(less<int>()) (20, 10)<<nl;
    cout<<nl;

    less<int> l;

    cout<<l(10, 20)<<nl;
    cout<<l(20, 20)<<nl;
    cout<<l(20, 10)<<nl;
    cout<<"================"<<nl;

    cout<<not2(l)(10, 20)<<nl;
    cout<<not2(l)(20, 20)<<nl;
    cout<<not2(l)(20, 10)<<nl;
    
    return 0;
}
