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

    vector<int> v(100, 0);
    for(int i = 0, a; i < n; i++){
        cin >> a;
        v[a]++;
    }
    for(int i = 0; i < 100; i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
