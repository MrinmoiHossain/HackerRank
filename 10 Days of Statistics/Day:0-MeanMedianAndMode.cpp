#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iterator>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n);
    map<int, int> m;
    double sum = 0, mid = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        int temp = a[i];
        sum += a[i];
        if(!m.count(temp))
            m[temp] = 1;
        else
            m[temp]++;
    }
    sort(a.begin(), a.end());
    
    cout << fixed << setprecision(1) << sum / n << endl;
    if(n % 2 == 0){
        mid = (a[n / 2 - 1] + a[n / 2]) / 2.0;
    }
    else
        mid = a[n / 2];
    cout << fixed << setprecision(1) << mid << endl;
    
    map<int, int>::iterator it = m.begin();
    int mx = it->second, mxv = it->first;
    for(it = ++it; it != m.end(); it++){
        if(mx < it->second){
            mx = it->second;
            mxv = it->first;
        }
    }
    cout << mxv << endl;
        
    
    return 0;
}

