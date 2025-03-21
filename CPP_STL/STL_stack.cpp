#include <iostream>
#include <stack>
#define nl '\n'

using namespace std;

int main() 
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.top()<<nl;
    st.pop();

    cout<<st.top()<<nl;
    st.pop();

    cout<<st.top()<<nl;
    st.pop();

    if (st.empty())
        cout<<"stack에 데이터 없음"<<nl;
    
    return 0;
}
