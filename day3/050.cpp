#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>
#include <cstdlib>      // std::rand, std::srand


using namespace std;

int main(){
    string str1 = "1244mf4mkm5knksdfa9g9i";
    string str2 = "republic of korea";
    int data1[10] = {1,2,3,4,5,6,7,8,9,10};

    srand(static_cast<unsigned int>(time(NULL)));

    random_device rd;
    mt19937 g(rd());


    shuffle(str1.begin(), str1.end(), g);
    shuffle(str2.begin(), str2.end(), g);
    shuffle(data1, data1+4, g);

    cout << "== str1 == " << endl;
    for(auto i:str1)
        cout << i << ", ";

    cout << endl << "== str2 == " << endl;
    for(auto i: str2)
        cout << i << ", ";

    cout << endl << "== data1 == " <<endl;

    for (auto i:data1)
        cout << i << ", ";

    return 0;
}