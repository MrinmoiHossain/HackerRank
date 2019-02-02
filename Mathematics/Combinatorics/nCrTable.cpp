#include <bits/stdc++.h>
#define mod 1000000000
using namespace std;

int v[1000][1000];

void combination(void)
{
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0)
                v[i][j] = 1;
            else if(i == j)
                v[i][j] = 1;
            else
                v[i][j] = (v[i-1][j-1] % mod + v[i-1][j] % mod) % mod;
        }
    }
}

int main()
{
    combination();
    int t;
    cin >> t;

    for(int i = 0, n; i < t; i++){
        cin >> n;

        for(int j = 0; j <= n; j++)
            cout << v[n][j] << " ";
        cout << endl;
    }

    return 0;
}
