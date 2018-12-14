#include <bits/stdc++.h>
using namespace std;

double cumulativeProbability(int x, int meu, int sigma)
{
    return 0.5 * (1 + erf((x-meu)/(sigma * sqrt(2))));
}

int main(void)
{
    int meu, sigma;
    cin >> meu >> sigma;

    int x;
    cin >> x;
    cout << fixed << setprecision(2) << (1 - cumulativeProbability(x, meu, sigma))*100.0 << endl;

    cin >> x;
    cout << fixed << setprecision(2) << (1 - cumulativeProbability(x, meu, sigma))*100.0 << endl;
    cout << fixed << setprecision(2) << cumulativeProbability(x, meu, sigma)*100.0 << endl;

    return 0;
}
