#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    string h = "hackerrank";

    for(int i = 0; i < a; i++){
        string s;
        cin >> s;
        int len = s.length(), con = 0;

        for(int i = 0; i < len; i++){
            if(h[con] == s[i])
                con++;
        }

        if(con == 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
