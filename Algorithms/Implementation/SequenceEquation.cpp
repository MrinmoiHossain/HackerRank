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
    int v[n + 1];

    for(int i = 1, a; i <= n; i++){
        cin >> a;
        v[a] = i;
    }
    for(int i = 1; i <= n; i++)
        cout << v[v[i]] << endl;


    return 0;
}
