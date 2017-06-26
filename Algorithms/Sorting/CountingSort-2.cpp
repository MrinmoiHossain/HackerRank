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
    for(int i = 0, a; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
