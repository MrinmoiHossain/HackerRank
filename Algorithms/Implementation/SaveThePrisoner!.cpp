#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    for(int i = 0, n, m, s; i < t; i++){
        cin >> n >> m >> s;
        int ans = (m + s - 1) % n;
        
        cout << (ans == 0? n : ans) << endl;
    }
    
    return 0;
}
