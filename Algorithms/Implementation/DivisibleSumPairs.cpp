#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int total = 0;

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if((a[i] + a[j]) % k == 0)
                total++;

    cout << total << endl;

    return 0;
}
