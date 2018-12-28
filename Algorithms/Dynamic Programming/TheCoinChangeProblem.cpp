#include <bits/stdc++.h>
typedef long long int lln;
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    vector<int> c(m);
    for(int i = 0; i < m; i++)
        cin >> c[i];

    vector<lln> possible(n+1, 0);
    possible[0] = 1;
    for(int i = 0; i < m; i++)
        for(int j = c[i]; j <= n; j++)
            possible[j] += possible[j-c[i]];

    cout << possible[n] << endl;

    return 0;
}
