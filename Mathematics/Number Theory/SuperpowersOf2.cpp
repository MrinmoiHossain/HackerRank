#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, ans = 2;
    cin >> a >> b;

    for(int i = 1; i <= a; i++){
        ans = (1LL * ans * ans) % b;
    }
    cout << ans % b << endl;

    return 0;
}
