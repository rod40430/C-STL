#include <iostream>
#include <string>
#define nl '\n'

using namespace std;

template <typename IterT, typename Func>
void For_Each(IterT begin, IterT end, Func pf)
{
    while (begin != end)
        pf(*begin++);
}

template <typename T>
struct PrintFunctor
{
    string sep;    // 출력자 구분자 정보
    explicit PrintFunctor(string s = " ") : sep(s) {}
    void operator() (T data) const
        {
            cout<<data<<sep;
        }
};

int main() 
{
    int arr[5] {10, 20, 30, 40, 50};
    For_Each(begin(arr), end(arr), PrintFunctor<int>());
    cout<<nl;

    string str[3] {"Hello", "World", "!"};
    For_Each(begin(str), end(str), PrintFunctor<string>("*\n"));
    cout<<nl;
    
    return 0;
}
