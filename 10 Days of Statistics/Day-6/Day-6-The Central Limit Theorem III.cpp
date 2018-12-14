#include <bits/stdc++.h>
using namespace std;

double marginError(double z, int sigma, int x)
{
    return z * sigma / sqrt(x);
}

int main(void)
{
    int x, meu, sigma;
    cin >> x;
    cin >> meu;
    cin >> sigma;
    double p, z;
    cin >> p;
    cin >> z;


    cout << fixed << setprecision(2) << meu - marginError(z, sigma, x) << endl;
    cout << fixed << setprecision(2) << meu + marginError(z, sigma, x) << endl;

    return 0;
}
