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
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    sort(a.begin(), a.end());

    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    sort(b.begin(), b.end());

    int res = 0;
    bool ch;
    for(int i = a[n - 1]; i <= b[0]; i++){
        ch = true;
        for(int j = 0; j < n && ch; j++)
            ch = !(i % a[j]);
        for(int j = 0; j < m && ch; j++)
            ch = !(b[j] % i);
        if(ch)
            res++;
    }
    cout << res << endl;

    return 0;
}
