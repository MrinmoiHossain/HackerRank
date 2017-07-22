#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    
    int fmid, lmid;
    bool b = 0;
    if(n & 1)
        fmid = n / 2, lmid = n / 2 + 1, b = 1;
    else
        fmid = n / 2, lmid = n / 2;
    
    vector<int> f, s;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(i < fmid)
            f.push_back(a[i]);
        if(i >= lmid)
            s.push_back(a[i]);
        if(b and i == n / 2)
            sum += a[i];
        if(!b and (i == lmid || i == lmid - 1)){
            sum += a[i];
        }
    }
    
    int fs = f.size();
    if(fs & 1)
        cout << f[fs / 2] << endl;
    else
        cout << (f[fs / 2] + f[fs / 2 - 1] ) / 2 << endl;
        
    if(b)
        cout << sum << endl;
    else
        cout << sum / 2 << endl;
    
    int ss = s.size();
    if(ss & 1)
        cout << s[ss / 2] << endl;
    else
        cout << (s[ss / 2] + s[ss / 2 - 1] ) / 2 << endl;
    
    return 0;
}

