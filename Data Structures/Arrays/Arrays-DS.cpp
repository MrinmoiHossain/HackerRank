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
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    reverse(arr.begin(), arr.end());

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
