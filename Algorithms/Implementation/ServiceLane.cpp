#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int output(int s, int e)
{
    int mn = 999999999;
    for(int i = s; i <= e; i++){
        if(mn > v[i])
            mn = v[i];
    }
    return mn;
}

int main(void)
{
    int n, m;
    cin >> n >> m;
    
    for(int i = 0, temp; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    
    for(int i = 0, s, e; i < m; i++){
        cin >> s >> e;
        
        cout << output(s, e) << endl;
    }
    
    return 0;
}