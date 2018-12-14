#include <bits/stdc++.h>
using namespace std;

double poissonDistribution(double gamma)
{
    return gamma * (1 + gamma);
}

int main(void)
{
    double x, y;
    cin >> x >> y;

    cout << fixed << setprecision(3) << 160 + 40 * poissonDistribution(x) << endl;
    cout << fixed << setprecision(3) << 128 + 40 * poissonDistribution(y) << endl;

    return 0;
}
