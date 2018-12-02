#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int T;
    long long int N, m;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N >> m;
        long div, mod;
        div = N / m, mod = N % m;

        cout << ((div * m * (m - 1))/ 2) + ((mod * (mod + 1)) / 2) << endl;
    }

    return 0;
}
