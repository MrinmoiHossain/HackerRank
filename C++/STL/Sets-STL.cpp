#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin >> q;

    set<int> s;
    set<int>::iterator it;
    for(int i = 0, x, y; i < q; i++){
        cin >> x >> y;

        switch(x)
        {
            case 1:
                s.insert(y);
                break;
            case 2:
                s.erase(y);
                break;
            case 3:
                it = s.find(y);
                cout << (it != s.end() ? "Yes" : "No") << endl;
        }
    }

    return 0;
}
