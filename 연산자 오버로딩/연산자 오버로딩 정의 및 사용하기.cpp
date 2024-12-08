#include <iostream>
#define nl '\n';

using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    void Print() const { cout << x << ',' << y << nl; }
    void operator+ (Point arg)
    {
        cout << "operator+() 함수 호출" << nl;
    }
};

int main()
{
    Point p1(2, 3), p2(5, 5);

    p1 + p2;    // => p1.operator+(p2); 와 같습니다.
    
    return 0;
}
