#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#define LL long long int
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();
    map<string, LL>m;

    string s;
    LL num;
    for(int i = 0; i < T; i++){
        cin >> s >> num;
        m[s] = num;
    }

    string ns;
    while(cin >> ns){
        if(m.find(ns) != m.end())
            cout << ns << "=" << m.find(ns)->second << endl;
        else
            cout << "Not found" << endl;
    }

    return 0;
}
