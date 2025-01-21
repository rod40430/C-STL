#include <iostream>
#define nl '\n'
using namespace std;

void Client(void);

/////////////// 서버 /////////////
void PrintHello(void)
{
    cout<<"Hello!"<<nl;
    Client(); // 서버에서 클라이언트 코드 호출
}

///////////// 클라이언트 ///////////////
void Client(void)
{
    cout<<"난 Client"<<nl;
}

int main() 
{
    PrintHello();
    
    return 0;
}
