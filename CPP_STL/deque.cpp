#include <iostream>
#include <deque>
#define nl '\n'

using namespace std;

int main() 
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    deque<int>::iterator iter {dq.begin()};
    cout<<iter[0]<<nl;
    cout<<iter[1]<<nl;
    cout<<iter[2]<<nl;
    cout<<iter[3]<<nl;
    cout<<iter[4]<<nl<<nl;

    iter += 2;
    cout<<*iter<<nl<<nl;
    
    deque<int>::iterator iter2 = iter + 2;
    cout<<*iter2<<nl;
    
    return 0;
}
