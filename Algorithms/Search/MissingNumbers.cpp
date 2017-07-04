#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> f;
    for(int i = 0, a; i < n; i++){
        cin >> a;
        if(!f.count(a))
            f[a] = 1;
        else
            f[a]++;
        
    }
    
    int m;
    cin >> m;
    map<int, int> s;
    for(int i = 0, a; i < m; i++){
        cin >> a;
        
        if(!s.count(a))
            s[a] = 1;
        else
            s[a]++;
    }
    map<int, int>::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        int b = it->second - f.find(it->first)->second;
        if(b)
            cout << it->first << " ";
    }
    cout << endl;
    
    return 0;
}

