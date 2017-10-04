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
    int k;
    cin >> n >> k;
    
    int e = 100;
    vector<int> c(n);
    for(int i = 0; i < n; i++)
        cin >> c[i];
    
    for(int i = 0; i < n; i += k){
        if(c[i])
            e -= 3;
        else
            e -= 1;
    }
    
    cout << e << endl;
    
    return 0;
}

