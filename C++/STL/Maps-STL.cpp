#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    string s;
    map<string, int> m;
    map<string, int>::iterator it;

    for(int i = 1, t; i <= T; i++){
        cin >> t >> s;
        int val;
        switch(t)
        {
            case 1:
                cin >> val;
                m[s] += val;
                break;
            case 2:
                m.erase(s);
                break;
            case 3:
                it = m.find(s);
                cout << (it != m.end() ? ((*it).second) : 0) << endl;
        }
    }

    return 0;
}
