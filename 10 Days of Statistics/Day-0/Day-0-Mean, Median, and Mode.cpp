#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    double sum = 0;
    vector<int> v(n);
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];

        if(!m.count(v[i]))
            m[v[i]] = 1;
        else
            m[v[i]]++;
    }
    sort(v.begin(), v.end());

    cout << fixed << setprecision(1) << sum / n << endl;
    if(n % 2 == 0)
        cout << fixed << setprecision(1) << (v[n/2-1] + v[n/2]) / 2.0 << endl;
    else
        cout << fixed << setprecision(1) << v[n/2] << endl;

    map<int,int>::iterator it = m.begin();
    int c = it->second, value = it->first;
    for(it = ++it; it != m.end(); it++){
        if(c < it->second){
            c = it->second, value = it->first;
        }
    }
    cout << value << endl;

    return 0;
}
