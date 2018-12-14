#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> x(5), y(5);
    double a, b, sumXY = 0.0, sumX = 0.0, sumY = 0.0, sumXX = 0.0;
    int n = 5;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];

        sumXY += x[i] * y[i];
        sumX += x[i];
        sumY += y[i];
        sumXX += x[i] * x[i];
    }
    b = (n * sumXY - sumX * sumY) / (n * sumXX - sumX * sumX);
    a = sumY / n - b * (sumX / n);

    cout << fixed << setprecision(3) << a + b * 80 << endl;

    return 0;
}
