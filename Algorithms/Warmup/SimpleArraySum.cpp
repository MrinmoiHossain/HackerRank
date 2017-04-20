#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << accumulate(a.begin(), a.end(), 0) << endl;

    return 0;
}
