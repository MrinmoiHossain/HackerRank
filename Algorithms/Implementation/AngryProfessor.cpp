#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 0, n, k; i < T; i++){
        cin >> n >> k;
        int con = 0;
        for(int j = 0, a; j < n; j++){
            cin >> a;
            if(a <= 0)
                con++;
        }

        if(con >= k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
