#include <iostream>
#include <vector>
#define nl '\n'

using namespace std;

int main() 
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(50);
    
    if (v1 == v2)
        cout<<"v1 == v2"<<nl;
    if (v1 != v2)
        cout<<"v1 != v2"<<nl;
    if (v1 < v2)
        cout<<"v1 < v2"<<nl;
    
    return 0;
}
