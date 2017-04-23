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
    string S;
    cin >> S;

    int len = (S.length()) / 3;
    int con = 0;
    for(int i = 0; i < S.length(); i += 3){
        if(S[i] != 'S')
            con++;
        if(S[i+1] != 'O')
            con++;
        if(S[i+2] != 'S')
            con++;
    }
    cout << con << endl;
}
