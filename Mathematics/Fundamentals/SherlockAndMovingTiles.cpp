#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int l, s1, s2;
    cin >> l >> s1 >> s2;

    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        long long int v;
        cin >> v;

        cout << fixed << setprecision(10) << sqrt(2) * (l - sqrt(v)) / abs(s1 - s2) << endl;
    }

    return 0;
}
