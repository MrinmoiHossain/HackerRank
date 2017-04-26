#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, q;
    cin >> n >> q;

    vector< vector<int> > arr(n);

    for(int i = 0; i < n; i++){
        int k, val;
        cin >> k;
        for(int j = 0; j < k; j++){
            cin >> val;
            arr[i].push_back(val);
        }
    }

    int m, p;
    for(int i = 0; i < q; i++){
        cin >> m >> p;
        cout << arr[m][p] << endl;
    }

    return 0;
}
