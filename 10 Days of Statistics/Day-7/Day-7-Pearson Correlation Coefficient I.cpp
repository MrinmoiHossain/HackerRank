#include <bits/stdc++.h>
using namespace std;

double covariance(vector<double> x, double sX, vector<double> y, double sY, int n)
{
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += (x[i] - sX) * (y[i] - sY);
    }

    return sum;
}

double standardDeviation(vector<double> v, double sV)
{
    int vs = v.size();
    double sum = 0.0;
    for(int i = 0; i < vs; i++){
        sum += pow(v[i] - sV, 2);
    }

    return sqrt(sum / vs);
}

int main(void)
{
    int n;
    cin >> n;

    vector<double> x(n), y(n);
    double sumX = 0.0, sumY = 0.0;
    for(int i = 0; i < n; i++){
        cin >> x[i];
        sumX += x[i];
    }
    for(int i = 0; i < n; i++){
        cin >> y[i];
        sumY += y[i];
    }
    sumX /= n, sumY /= n;


    cout << fixed << setprecision(3) << covariance(x, sumX, y, sumY, n) / (n * standardDeviation(x, sumX) * standardDeviation(y, sumY))<< endl;

    return 0;
}
