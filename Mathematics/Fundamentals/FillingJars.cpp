#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int n, q, sm = 0, a, b, value;
    cin >> n >> q;

    while(q--){
        cin >> a >> b >> value;

        sm += (b - a + 1) * value;
    }

    cout << sm / n << endl;

    return 0;
}
