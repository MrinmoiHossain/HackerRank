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
    cin >> n;
    vector<int> c(102);

    int a;
    for(int i = 0; i < n; i++){
       cin >> a;
       c[a]++;
    }

    int sum = 0;
    for(int i = 0; i < 102; i++)
        sum += (c[i] / 2);

    cout << sum << endl;

    return 0;
}
