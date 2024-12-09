#include <iostream>
#define nl '\n';

using namespace std;

struct FuncObject
{
public:
    void operator()(int arg)
    {
        cout << "정수 : " << arg << nl;
    }
};

void Print1(int arg)
{
    cout << "정수 : " << arg << nl;
}

int main()
{
    void (*Print2) (int) {Print1};
    FuncObject Print3;

    Print1(10);    // 함수
    Print2(10);    // 함수 포인터
    Print3(10);    // 함수 객체
    
    return 0;
}
