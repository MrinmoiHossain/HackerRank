#include <bits/stdc++.h>
using namespace std;

vector<int> Rank(vector<double> v)
{
    vector<double> temp = v;
    sort(v.begin(), v.end());
    map<double, int> m;
    vector<int> r;
    for(int i = 0; i < v.size(); i++)
        m[v[i]] = i + 1;

    for(int i = 0; i < v.size(); i++){
        r.push_back(m[temp[i]]);
    }

    return r;
}

double sumOfDsqaure(vector<double> x, vector<double> y)
{
    double d = 0.0;
    int xs = x.size(), ys = y.size();

    vector<int> rx, ry;
    rx = Rank(x);
    ry = Rank(y);

    for(int i = 0; i < xs; i++){
        d += pow(rx[i] - ry[i], 2);
    }

    return d;
}

double spearmansRankCorrelationCoefficient(double d, int n)
{
    return 1 - ((6*d) / (n * (n*n-1)));
}

int main(void)
{
    int n;
    cin >> n;

    vector<double> x(n), y(n);
    for(int i = 0; i < n; i++)
        cin >> x[i];
    for(int i = 0; i < n; i++)
        cin >> y[i];


    cout << fixed << setprecision(3) << spearmansRankCorrelationCoefficient(sumOfDsqaure(x, y), n) << endl;

    return 0;
}
