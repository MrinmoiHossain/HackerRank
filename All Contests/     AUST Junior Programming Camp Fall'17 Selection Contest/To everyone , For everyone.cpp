#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int i = 1, n; i <= T; i++){
        cin >> n;
        vector<int> v(n), as(n), ds(n);
        for(int j = 0; j < n; j++)
            cin >> v[j];
        as = v;
        sort(as.begin(), as.end());
        ds = as;
        reverse(ds.begin(), ds.end());
        
        bool flag = true;
        if(as[0] == v[0]){
            for(int j = 1; j < n; j++){
                if(as[j] != v[j]){
                    flag = false;
                    break;
                }
            }
        }   
        else if(ds[0] == v[0]){
            for(int j = 1; j < n; j++){
                if(ds[j] != v[j]){
                    flag = false;
                    break;
                }
            }
        }
        else
            flag = false;
        
        
        cout << "Case " << i  << ": " << (flag? "YES":"NO") << endl;
    }

    return 0;
}

