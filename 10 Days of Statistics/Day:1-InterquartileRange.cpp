#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    
    vector<int> v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < b[i]; j++)
            v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    
    int s = v.size();
    int fmid = s / 2, lmid;
    if(s & 1)
        lmid = s / 2 + 1;
    else
        lmid = s / 2;
    
    vector<int> fv, lv;
    for(int i = 0; i < s; i++){
        if(i < fmid)
            fv.push_back(v[i]);
        if(i >= lmid)
            lv.push_back(v[i]);
    }
    int fs = fv.size(), ls = lv.size();
    
    double q1;
    if(fs & 1)
        q1 = fv[fs/2];
    else
        q1 = (fv[fs/2] + fv[fs/2 - 1]) / 2;
    
    double q2;
    if(ls & 1)
        q2 = lv[ls/2];
    else
        q2 = (lv[ls/2] + lv[ls/2 - 1]) / 2;
    
    
    cout << fixed << setprecision(1) << q2 - q1 << endl;
    
    return 0;
}

