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
    int n, k, q;
    int j;
    cin >> n >> k >> q;
    k %= n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int p;
    for(int i = 0; i < q; i++){
        int m;
        cin >> m;
        p = m - k;

        if(p < 0)
            cout << a[n + p] << endl;
        else
            cout << a[p] << endl;
    }

    return 0;
}
