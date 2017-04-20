#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;
#define LL long long int

int main(void)
{
    int n;
    cin >> n;

    vector<int> a(n);
    LL sum = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}
