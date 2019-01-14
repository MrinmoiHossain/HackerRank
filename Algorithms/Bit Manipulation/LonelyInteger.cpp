#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> v(n, 0);
    for(int i = 0, temp; i < n; i++){
        cin >> temp;
        v[temp]++;
    }
    for(int i = 0; i < 101; i++){
        if(v[i] == 1)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
