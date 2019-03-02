#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(void)
{
    int t;
    cin >> t;

    for(int i = 0, a, b; i < t; i++){
        cin >> a >> b;

        int g = gcd(a, b);

        cout << (a / g) * (b / g) << endl;
    }

    return 0;
}
