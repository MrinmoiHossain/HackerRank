#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for(int i = 0, a, b; i < n; i++){
        cin >> a >> b;

        int con = floor(sqrt(b)) - ceil(sqrt(a)) + 1;

        cout << con << endl;
    }
    return 0;
}
