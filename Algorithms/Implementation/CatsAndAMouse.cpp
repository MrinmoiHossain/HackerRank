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

int main(void)
{
    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        int x, y, z;
        cin >> x >> y >> z;

        if(abs(z - x) < abs(z - y))
            cout << "Cat A" << endl;
        else if(abs(z - x) > abs(z - y))
            cout << "Cat B" << endl;
        else
            cout << "Mouse C" << endl;
    }
    return 0;
}
