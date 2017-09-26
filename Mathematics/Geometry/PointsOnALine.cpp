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

int main()
{
    int n;
    cin >> n;

	set<int> allX, allY;
    for(int i = 0; i < n; i++){
        int x;
        int y;
        cin >> x >> y;
        allX.insert(x);
        allY.insert(y);
    }
    cout << (allX.size() == 1 || allY.size() == 1 ? "YES" : "NO") << endl;

    return 0;
}

