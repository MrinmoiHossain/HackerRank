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
    vector<int> h(26);
    int mx = 0;
    for(int i = 0; i < 26; i++)
        cin >> h[i];
        
    string word;
    cin >> word;
    for(int i = 0; i < word.length(); i++)
        mx = max(mx, h[word[i] - 'a']);
    
    cout << (word.length()) * mx << endl;
    
    return 0;
}

