#include <iostream>

#define nl '\n'

class Array
{
private:
    int *arr;
    int size;
    int capacity;
public:
    Array(int cap = 100) : arr(0), size(0), capacity(cap)
    {
        arr = new int[capacity];
    }

    ~Array()
    {
        delete [] arr;
    }

    void Add(int data)
    {
        if (size < capacity)
            arr[size++] = data;
    }

    int Size() const
    {
        return size;
    }

    int operator[] (int idx) const
    {
        return arr[idx];
    }
};

using namespace std;

int main(void)
{
    Array ar(10);

    ar.Add(10);
    ar.Add(20);
    ar.Add(30);

    for (int i{}; i < ar.Size(); ++i)
        cout<<ar[i]<<nl;    // ar.operator[] (i) 와 같습니다.

    return 0;
}
