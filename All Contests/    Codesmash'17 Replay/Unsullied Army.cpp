#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int i = 1, a, n; i <= T; i++){
        cin >> a >> n;
        cin.ignore();
        char s[a];
        for(int j = 0; j < a; j++)
            cin >> s[j];
        string r = "";
        
        map<string, pair<ll, int> > m;
        m.clear();
        ll v;
        for(int j = 0, x, y; j < n; j++){
            cin >> x >> y >> v;
            
            for(int k = x - 1; k <= y - 1; k++)
                r += s[k];

            m[r].first += v;
            m[r].second += 1;
            r = "";
        }
        
        map<string, pair<ll, int> >::iterator it;
        cout << "Case " << i << ":" << endl;
        int q;
        cin >> q;
        cin.ignore();
        for(int j = 0; j < q; j++){
            cin >> r;
            
            bool b = 1;
            for(it = m.begin(); it !=  m.end(); it++)
                if(it->first == r){
                    cout << it->second.second << " " << it->second.first << endl;
                    b = 0;
                    break;
                }
            
            if(b)
                cout << 0 << " " << 0 << endl;
        }
        
        m.clear();
    }
    return 0;
}

