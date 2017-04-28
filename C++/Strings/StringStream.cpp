#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> passInt(string a);

int main(void)
{
    string a;
    cin >> a;

    vector<int> integers = passInt(a);

    for(int i = 0; i < integers.size(); i++)
        cout << integers[i] << endl;

    return 0;
}

vector<int> passInt(string a)
{
    stringstream s(a);
    vector<int>b;
    int i;

    while(s >> i){
        b.push_back(i);
        if(s.peek() == ',')
            s.ignore();
    }

    return b;
}
