#include <bits/stdc++.h>
using namespace std;

int anagaram(string s)
{
    int len = s.length();
    if(len & 1)
        return - 1;

    vector<int> a(26, 0);
    for(int i = 0; i < len; i++){
        if(i < len / 2)
            a[s[i] - 97]++;
        else
            a[s[i] - 97]--;
    }
    int con = 0;
    for(int i = 0; i < 26; i++)
        if(a[i] > 0)
            con += a[i];
    return con;
}

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string s;
        cin >> s;
        cout << anagaram(s) << endl;
    }

    return 0;
}
