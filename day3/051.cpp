#include <iostream>
#include <ctime>

using namespace std;

int main(){
    //날짜와 시간을 얻을 수 있는 time_t 변수 선언
    time_t now = time(NULL);
    tm* ptm = localtime(&now);

    char buffer[64];
    strftime(buffer, 64, "지금은 %Y년 %m월 %d일, %H시 %M분 %S초입니다. (%p)\n", ptm);

    cout << buffer;

    return 0;
}