#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    int n;
    cin >> s;

    try{
        n = stoi(s);
        cout << n;
    }
    catch(...){
        cout << "Bad String";
    }
    cout << endl;

    return 0;
}
