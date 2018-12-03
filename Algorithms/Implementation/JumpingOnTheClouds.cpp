#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> v)
{
    int i = 0, n = v.size(), con = 0;
    while(i < n - 1){
        if(i + 2 >= n || v[i+2] == 1){
            i++;
            con++;
        }
        else{
            i += 2;
            con++;
        }
    }
    return con;
}

int main()
{
    int n;
    cin >> n;
    vector<int> c(n);

    for(int i = 0; i < n; i++)
       cin >> c[i];

    cout << jumpingOnClouds(c) << endl;

    return 0;
}
