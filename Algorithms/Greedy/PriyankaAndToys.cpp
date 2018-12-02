#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int mn = v[0] + 4, con = 1;
    for(int i = 1; i < n; i++){
        if(v[i] > mn){
            con++;
            mn = v[i] + 4;
        }
    }
    cout << con << endl;

    return 0;
}
