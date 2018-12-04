#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    int con = 100;
    for(int i = 0; i < n; i += k){
        if(v[i] == 1)
            con -= 3;
        else
            con -= 1;
    }
    cout << con << endl;

    return 0;
}
