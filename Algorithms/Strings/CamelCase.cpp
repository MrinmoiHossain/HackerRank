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
    string s;
    cin >> s;

    int con = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 65 && s[i] <= 91)
            con++;
    }
    cout << con + 1 << endl;

    return 0;
}
