#include <bits/stdc++.h>
using namespace std;

double geometricDistribution(int n, double p)
{
    return pow(1-p, n-1) * p;
}

int main(void)
{
    int a, b, n;
    cin >> a >> b;
    cin >> n;
    double p = a * 1.0/b;

    double ans = 0.0;
    for(int i = 1; i <= n; i++){
        ans += geometricDistribution(i, p);
    }

    cout << fixed << setprecision(3) << ans << endl;

    return 0;
}
