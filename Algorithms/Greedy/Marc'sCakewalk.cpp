#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());
    long long int sum = 0;
    for(int i = 0; i < n; i++)
        sum += pow(2, i)*v[i];

    cout << sum << endl;

    return 0;
}
