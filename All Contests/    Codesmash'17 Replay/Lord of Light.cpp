#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    string v[] = {"abcdef", "bc", "abdeg", "abcdg", "bcfg", "acdfg", "acdefg", "abc", "abcdefg", "abcdfg"};
    for(int i = 1, n; i <= T; i++){
        cin >> n;
        
        cout << "Case " << i << ": " << v[n] << endl;
    }
    return 0;
}

