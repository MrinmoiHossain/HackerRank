#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> w(n);
    int sumW = 0;
    for(int i = 0; i < n; i++){
        cin >> w[i];
        sumW += w[i];
    }


    double sum = 0;
    for(int i = 0; i < n; i++)
        sum += (v[i] * w[i]);

    cout << fixed << setprecision(1) << sum / sumW << endl;

    return 0;
}
