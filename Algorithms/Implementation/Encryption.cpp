#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    //cout << len << endl;
    int sq = sqrt(len), hi = ceil(sqrt(len));
    
    
    for(int i = 0; i < (sq * sq == len ? sq : sq + 1); i++){
        for(int j = i; j < len; j += hi){
            cout << s[j];
        }
        if(i < (sq * sq == len ? sq  - 1 : sq))
            cout << " ";
    }
    cout << endl;
    
    return 0;
}
