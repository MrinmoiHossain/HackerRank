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

int binary(int n);

int main(void)
{
    int n;
    cin >> n;

    cout << binary(n) << endl;

    return 0;
}

int binary(int n)
{
    int mx = 0, con = 0;

    while(n){
        if(n % 2 == 1)
            con++;
        else
            con = 0;
        if(con > mx)
            mx = con;

        n /= 2;
    }
    return mx;
}
