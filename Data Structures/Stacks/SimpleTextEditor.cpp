#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;

    stack<string> s;
    string ss;
    for(int i = 0, n, k; i < t; i++){
        cin >> n;
        string st;
    
        if(n == 1){
            cin >> st;
            s.push(ss);
            ss += st;
        }
        else if(n == 2){
            cin >> k;
            s.push(ss);
            ss.erase(ss.size() - k);
        }
        else if(n == 3){
            cin >> k;
            cout << ss[k-1] << endl;
        }
        else if(n == 4){
            ss = s.top();
            s.pop();
        }
    }

    return 0;
}

