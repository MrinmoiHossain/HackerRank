#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int sum = 0, con = 0, j = 0;
    while(sum <= k){
        sum += v[j];
        if(sum <= k)
            con++;
        j++;
    }
    cout << con << endl;

    return 0;
}
