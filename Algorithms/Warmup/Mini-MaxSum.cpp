#include <bits/stdc++.h>
using namespace std;
#define LL long long int

int main(void)
{
    vector<LL>a(5);

    for(int i = 0; i < 5; i++)
        cin >> a[i];

    vector<LL>sum(5);

    sum[0] = a[0] + a[1] + a[2] + a[3];
    sum[1] = a[0] + a[1] + a[2] + a[4];
    sum[2] = a[0] + a[1] + a[3] + a[4];
    sum[3] = a[0] + a[2] + a[3] + a[4];
    sum[4] = a[1] + a[2] + a[3] + a[4];

    sort(sum.begin(), sum.end());
    cout << sum[0] << " " << sum[4] << endl;

    return 0;
}
