#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int>s(n);

    for(int i = 0; i < n; i++)
        cin >> s[i];

    int mx = s[0], mn = s[0], conM = 0, conMi = 0;

    for(int i = 1; i < n; i++){
        if(s[i] > mx){
            mx = s[i];
            conM++;
        }
        if(s[i] < mn){
            mn = s[i];
            conMi++;
        }
    }
    cout << conM << " " << conMi << endl;

    return 0;
}
