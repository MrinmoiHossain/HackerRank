#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v(2);
    cin >> v[0];
    cin >> v[1];
    sort(v.begin(), v.end());

    int mx = 0;
    for(int i = v[0]; i <= v[1]; i++){
        for(int j = v[0]; j <= v[1]; j++){
            int temp = (i^j);
            if(temp > mx)
                mx = temp;
        }
    }
    cout << mx << endl;

    return 0;
}
