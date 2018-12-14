#include <bits/stdc++.h>
using namespace std;

double cumulativeProbability(double x, int meu, int sigma)
{
    return 0.5 * (1 + erf((x-meu)/(sigma * sqrt(2))));
}

int main(void)
{
    int meu, sigma;
    cin >> meu >> sigma;

    double x;
    cin >> x;
    cout << fixed << setprecision(3) << cumulativeProbability(x, meu, sigma) << endl;

    double x1, x2;
    cin >> x1 >> x2;
    cout << fixed << setprecision(3) << cumulativeProbability(x2, meu, sigma) - cumulativeProbability(x1, meu, sigma) << endl;

    return 0;
}
