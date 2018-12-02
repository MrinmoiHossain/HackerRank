#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int mn = v[n - 1] - v[0];

    for(int j = 0, temp; j < n - k + 1; j++){
        temp = v[j+k-1] - v[j];

        if(temp < mn)
            mn = temp;
    }
    cout << mn << endl;

    return 0;
}
