#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(char a, char b)
{
    if(a == '[' and b == ']') return 1;
    if(a == '{' and b == '}') return 1;
    if(a == '(' and b == ')') return 1;
    return 0;
}

bool balanced(string s)
{
    int len = s.length();
    if(len == 0)
        return 1;

    stack<char> S;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' or s[i] == '{' or s[i] == '[')
            S.push(s[i]);
        else{
            if(S.empty() or !check(S.top(), s[i]))
                return 0;
            else
                S.pop();
        }
    }
    return S.empty() ? 1 : 0;
}


int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string s;
        cin >> s;

        if(balanced(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
