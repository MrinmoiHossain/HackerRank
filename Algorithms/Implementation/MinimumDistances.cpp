#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    map<int, vector<int> > m;
    for(int i = 0, temp; i < n; i++){
        cin >> temp;
        m[temp].push_back(i);
    }
    
    map<int, vector<int> > ::iterator it;
    int mn = 999999999;
    for(it = m.begin(); it != m.end(); it++){
        if(it->second.size() >= 2)
            mn = min(mn, abs(it->second[0] - it->second[1]));
    }
    cout << (mn == 999999999? -1 : mn) << endl;
    
    return 0;
}
