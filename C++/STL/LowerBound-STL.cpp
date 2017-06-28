#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    int q;
    cin >> q;
    for(int i = 0, y; i < q; i++){
        cin >> y;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), y);
        int pos = low - v.begin();

        if(v[pos] == y)
            cout << "Yes " << ++pos << endl;
        else
            cout << "No " << ++pos << endl;
    }

    return 0;
}
