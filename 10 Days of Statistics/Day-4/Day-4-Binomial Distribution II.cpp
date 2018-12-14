#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

int combination(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

double binomialDistribution(int x, int n, double p)
{
    return combination(n, x) * pow(p, x) * pow(1-p, n-x);
}

int main(void)
{
    double p;
    int n;
    cin >> p >> n;
    p /= 100;

    double sum = 0.0;
    for(int i = 0; i <= 2; i++){
        sum += binomialDistribution(i, n, p);
    }
    double sum1 = 0.0;
    for(int i = 2; i <= n; i++){
        sum1 += binomialDistribution(i, n, p);
    }

    cout << fixed << setprecision(3) << sum << endl;
    cout << fixed << setprecision(3) << sum1 << endl;

    return 0;
}
