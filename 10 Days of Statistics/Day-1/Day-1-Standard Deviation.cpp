#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> v(n);
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    double mean = sum / n;
    double sumSigma = 0.0;
    for(int i = 0; i < n; i++){
        sumSigma += pow(v[i] - mean, 2);
    }

    cout << fixed << setprecision(1) << sqrt(sumSigma / n) << endl;

    return 0;
}
