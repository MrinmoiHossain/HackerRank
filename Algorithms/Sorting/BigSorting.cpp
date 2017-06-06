#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if(a.length() != b.length()) return a.length() < b.length();
    return a < b;
}

int main(void)
{
    int n;
    cin >> n;
    vector<string> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < n; i++)
        cout << v[i] << endl;

    return 0;
}
