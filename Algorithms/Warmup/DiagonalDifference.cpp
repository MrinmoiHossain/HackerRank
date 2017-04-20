#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int a[n][n];
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];

            if(i == j)
                sum1 += a[i][j];
            if(i + j == n - 1)
                sum2 += a[i][j];
        }
    }

    cout << abs(sum1 - sum2) << endl;

    return 0;
}
