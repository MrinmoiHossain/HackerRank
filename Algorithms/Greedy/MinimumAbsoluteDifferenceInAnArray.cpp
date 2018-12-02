#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int vs = v.size(), mn = v[n-1] - v[0];

    for(int i = 0; i < vs - 1; i++){
        int temp = abs(v[i] - v[i+1]);
        if(temp < mn)
            mn = temp;
    }
    cout << mn << endl;

    return 0;
}
