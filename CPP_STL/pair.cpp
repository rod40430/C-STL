#include <iostream>
#include <string>
#define nl '\n'

using namespace std;

template <typename T1, typename T2>
struct Pair
{
    T1 first;
    T2 second;
    Pair(const T1& ft, const T2& sd) : first(ft), second(sd) {}
};

int main() 
{
    Pair<int, int> p1(10, 20);
    cout<<p1.first<<' '<<p1.second<<nl;
    Pair<int, string> p2(10, "one");
    cout<<p2.first<<' '<<p2.second<<nl;
    cout<<nl;

    pair<int, int> p3(10, 20);
    cout<<p3.first<<' '<<p3.second<<nl;
    pair<int, string> p4(10, "one");
    cout<<p4.first<<' '<<p4.second<<nl;
    
    return 0;
}
