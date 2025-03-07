#include <iostream>
#include <queue>
#define nl '\n'

using namespace std;

template<typename T>
class Queue
{
    private:
        enum {CAP = 100};
        T buf[CAP];
        int front, rear;
    public:
        Queue() : front(0), rear(0) {}
        void Push(const T& x)
        {
            buf[rear = (rear + 1) % CAP] = x;
        }
        const T& Pop(void)
        {
            return buf[front = (front + 1) % CAP];
        }
        bool Empty() const
        {
            return rear == front;
        }
};

int main() 
{
    Queue<int> q;

    q.Push(10);
    q.Push(20);
    q.Push(30);

    if (!q.Empty())
        cout<<q.Pop()<<nl;
    if (!q.Empty())
        cout<<q.Pop()<<nl;
    if (!q.Empty())
        cout<<q.Pop()<<nl;

    cout<<nl;

    queue<int> q2;

    q2.push(10);
    q2.push(20);
    q2.push(30);

    if (!q2.empty())
        cout<<q2.front()<<nl;
    q2.pop();
    if (!q2.empty())
        cout<<q2.front()<<nl;
    q2.pop();
    if (!q2.empty())
        cout<<q2.front()<<nl;
    q2.pop();
    
    return 0;
}
