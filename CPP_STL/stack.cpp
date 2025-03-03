#include <iostream>
#include <stack>
#define nl '\n'

using namespace std;

template<typename T>
class Stack
{
    private:
        T but[100];
        int top;
    public:
        Stack() : top(0) {}
        void Push(const T& x)
        {
            but[top++] = x;
        }
        const T& Pop(void)
        {
            return but[--top];
        }
        bool Empty() const
        {
            return top <= 0;
        }
};

int main() 
{
    Stack<int> st;

    st.Push(10);
    st.Push(20);
    st.Push(30);

    if (!st.Empty())
        cout<<st.Pop()<<nl;
    if (!st.Empty())
        cout<<st.Pop()<<nl;
    if (!st.Empty())
        cout<<st.Pop()<<nl;

    cout<<nl;

    stack<int> st2;

    st2.push(10);
    st2.push(20);
    st2.push(30);

    if (!st2.empty())
        cout<<st2.top()<<nl;
    st2.pop();
    if (!st2.empty())
        cout<<st2.top()<<nl;
    st2.pop();
    if (!st2.empty())
        cout<<st2.top()<<nl;
    st2.pop();
    
    return 0;
}
