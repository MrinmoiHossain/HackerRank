#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector <int> v)
{
    int con = 0;
    for(int i = 0; i < v.size() - 1; i++, con++){
        if(v[i + 2] == 0)
            i++;
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
