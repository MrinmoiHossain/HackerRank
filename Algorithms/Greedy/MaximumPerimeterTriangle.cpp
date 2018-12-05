#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int con = n - 3;
    while(con >= 0 && (v[con] + v[con+1] <= v[con+2]))
        con--;

    if(con >= 0)
        cout << v[con] << " " << v[con+1] << " " << v[con+2] << endl;
    else
        cout << -1 << endl;

    return 0;
}
