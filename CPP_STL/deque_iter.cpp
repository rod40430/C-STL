#include <iostream>
#include <deque>
#define nl "\n"

using namespace std;

int main()
{
    deque<int> dq;
    
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    
    deque<int>::iterator iter;
    for (iter = dq.begin(); iter != dq.end(); ++iter)
        cout<<*iter<<' ';
    cout<<nl;
    
    iter = dq.begin() + 2;
    cout<<*iter<<nl;
    
    iter += 2;
    cout<<*iter<<nl;
    
    iter -= 3;
    cout<<*iter<<nl;
    
    return 0;
}
