#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b);

int main(void)
{
    int t;
    cin >> t;

    for(int i = 0, n; i < t; i++){
        cin >> n;

        int gd = 0;
        for(int j = 0, d; j < n; j++){
            cin >> d;

            gd = gcd(gd, d);
        }
        //cout << gd << endl;
        if(gd == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
