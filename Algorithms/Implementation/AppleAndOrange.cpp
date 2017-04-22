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
    int s;
    int t;
    cin >> s >> t;

    int a;
    int b;
    cin >> a >> b;

    int m, n;
    cin >> m >> n;

    vector<int> apple(m);
    vector<int> orange(n);

    int appleC = 0;
    for(int i = 0; i < m; i++){
       cin >> apple[i];
       int sum = a + apple[i];
       if(sum >= s && sum <= t)
           appleC++;

    }
    int orangeC = 0;
    for(int i = 0; i < n; i++){
       cin >> orange[i];
       int sum = b + orange[i];
       if(sum >= s && sum <= t)
           orangeC++;
    }

    cout << appleC << endl;
    cout << orangeC << endl;

    return 0;
}
