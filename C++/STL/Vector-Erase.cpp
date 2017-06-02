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
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int x;
    cin >> x;
    x--;
    a.erase(a.begin() + x);

    int b, c;
    cin >> b >> c;
    b--, c--;
    a.erase(a.begin() + b, a.begin() + c);

    int sz = a.size();
    cout << sz << endl;
    for(int i = 0; i < sz; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
