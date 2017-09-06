#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    
    map<string, int> m;
    string s;
    for(int i = 0; i < T; i++){
        cin >> s;
        m[s] += 1;
    }
    
    int q;
    cin >> q;
    cin.ignore();
    
    for(int i = 0; i < q; i++){
        cin >> s;
        
        cout << m[s] << endl;
    }
    m.clear();
    
    return 0;
}

