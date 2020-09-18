#include <iostream>
#include <string>

using namespace std;

int main(){
    string introduction = "안녕하세요. 만나서 모두 반갑습니다. 저는 멕시입니다.";

    cout << "어떤 문자열을 찾고 싶으세요? " <<endl;

    string look="";

    cin >> look;

    int rtn = introduction.find(look);

    if(rtn > 0)
        cout << look << "을 찾았습니다. 위치는 " <<rtn << "입니다. " << endl;
    else
        cout << "문자열을 찾을 수 없습니다. " << endl;

    return 0;
}