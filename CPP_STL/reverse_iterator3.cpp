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

    vector<int>::iterator normal_iter = v.begin() + 3;
    vector<int>::reverse_iterator reverse_iter(normal_iter);

    cout<<"정방향 반복자의 값"<<*normal_iter<<nl;
    cout<<"역방향 반복자의 값"<<*reverse_iter<<nl;
    cout<<nl;

    for (vector<int>::iterator iter = v.begin(); iter != normal_iter; ++iter)
        cout<<*iter<<' ';
    cout<<nl;
    for (vector<int>::reverse_iterator riter = reverse_iter; riter != v.rend(); ++riter)
        cout<<*riter<<' ';
    cout<<nl;
    
    return 0;
}
