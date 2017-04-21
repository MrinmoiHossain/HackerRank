#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int mx = a[n - 1], con = 0;
    for(int i = n - 1; i >= 0; i--){
        if(mx == a[i])
            con++;
        else
            break;
    }

    cout << con << endl;

    return 0;
}
