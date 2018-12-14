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

    cout << fixed << setprecision(3) << geometricDistribution(n, p) << endl;

    return 0;
}
