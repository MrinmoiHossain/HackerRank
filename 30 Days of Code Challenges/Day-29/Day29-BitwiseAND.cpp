#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;

    for(int i = 0, n, m; i < t; i++){
        cin >> n >> m;

        int mx = 0;
        for(int j = 1; j < n; j++){
            for(int k = j + 1; k <= n; k++){
                int con =  j & k;
                if(con > mx && con < m)
                    mx = con;
            }
        }
        cout << mx << endl;
    }

    return 0;
}
