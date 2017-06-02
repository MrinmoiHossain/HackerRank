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
    vector<int> v;

    for(int i = 0, k; i < n; i++){
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());

    for(int i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}
