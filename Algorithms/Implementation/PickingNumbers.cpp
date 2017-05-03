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

int a[101];

int main(void)
{
    int n;
    cin >> n;

    int x;

    for(int i = 0; i < n; i++){
        cin >> x;
        a[x]++;
    }
    x = 0;

    for(int i = 1; i < n; i++)
        x = max(x, a[i - 1] + a[i]);

    cout << x << endl;

    return 0;
}
