#include <bits/stdc++.h>
using namespace std;

int getWays(vector<int>a, int d, int m);

int main(void)
{
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int d, m;
    cin >> d >> m;

    cout << getWays(a, d, m) << endl;

    return 0;
}

int getWays(vector<int>a, int d, int m)
{
    int con = 0;

    for(int i = 0; i < a.size(); i++){
        int sum = a[i];
        for(int j = i + 1; j < i + m; j++)
            sum += a[j];

        if(sum == d)
            con++;
    }

    return con;
}
