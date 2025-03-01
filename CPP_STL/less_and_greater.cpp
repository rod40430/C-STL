#include <iostream>
#include <functional>
#define nl '\n'

using namespace std;

template <typename T>
struct Less
{
    bool operator() (T a, T b)
    {
        return a < b;
    }
};

template <typename T>
struct Greater
{
    bool operator() (T a, T b)
    {
        return a > b;
    }
};

int main() 
{
    cout<<Less<int>() (10, 20) << nl;  // 사용자 Less, Greater
    cout<<Less<int>() (20, 10) << nl;
    cout<<Greater<int>() (10, 20) << nl;
    cout<<Greater<int>() (20, 10) << nl;
    cout<<nl;
    
    cout<<less<int>() (10, 20) << nl;  // STL less, greater
    cout<<less<int>() (20, 10) << nl;
    cout<<greater<int>() (10, 20) << nl;
    cout<<greater<int>() (20, 10) << nl;
    
    return 0;
}
