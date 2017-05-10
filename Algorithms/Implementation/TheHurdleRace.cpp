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
    int n, k;
    cin >> n >> k;
    vector<int> height(n);

    for(int i = 0; i < n; i++)
        cin >> height[i];

    sort(height.begin(), height.end());

    if(height[n - 1] < k)
        cout << 0 << endl;
    else
        cout << height[n - 1] - k << endl;

    return 0;
}
