#include <iostream>
#include <deque>
#define nl "\n"

using namespace std;

int main()
{
    deque<int> dq;

    for (int i{0}; i < 10; ++i)
        dq.push_back((i + 1) * 10);
    deque<int>::iterator iter;
    deque<int>::iterator iter2;

    for (iter = dq.begin(); iter != dq.end(); ++iter)
        cout<<*iter<<' ';
    cout<<nl;

    iter = dq.begin() + 2;
    iter2 = dq.insert(iter, 500);
    cout<<*iter2<<nl;

    for (iter = dq.begin(); iter != dq.end(); ++iter)
        cout<<*iter<<' ';
    cout<<nl;
    
    
    return 0;
}
