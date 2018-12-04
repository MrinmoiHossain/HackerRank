#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    vector<long int> v(n, 0);
    for(int i = 0, a, b, k; i < m; i++){
        cin >> a >> b >> k;

        v[a-1] += k;
        if(b < n)   // b-> b+1-1
            v[b] -= k;
    }

    long int mx = v[0];
    for(int i = 1; i < n; i++){
        v[i] += v[i-1];
        if(v[i] > mx)
            mx = v[i];
    }
    cout << mx << endl;

    return 0;
}
