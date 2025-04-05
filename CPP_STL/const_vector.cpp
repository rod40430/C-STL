#include <iostream>
#include <vector>
#define nl '\n'

using namespace std;

int main() 
{
    vector<int> v;
    int arr[5] {10, 20, 30, 40, 50};

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator iter = v.begin();    // 다음 원소로 이동가능, 원소변경 가능
    int *p = arr;
    cout<<*iter<<", "<<*p<<nl;

    vector<int>::const_iterator citer = v.begin();    // 다음원소로 이동가능, 원소이동 불가능
    const int* cp = arr;
    cout<<*citer<<", "<<*cp<<nl;

    const vector<int>::iterator iter_const = v.begin();    // 원소이동 불가능, 원소변경 가능
    int* const p_const = arr;
    cout<<*iter_const<<", "<<*p_const<<nl;

    const vector<int>::const_iterator citer_const = v.begin();    // 원소이동 불가능, 원소변경 불가능
    const int* const cp_const = arr;
    cout<<*citer_const<<", "<<*cp_const<<nl;
    
    return 0;
}
