#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, a, b, c, d;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> a >> b >> c >> d;
        
        cout << (2 * c) - a << " " << (2 * d) - b << endl;
    }

    return 0;
}
