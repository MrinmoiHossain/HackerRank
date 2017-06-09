#include <bits/stdc++.h>
using namespace std;

string twoStrings(string s1, string s2)
{
    vector<int> a(26, 0);
    bool b = false;
    for(int i = 0; i < s1.length(); i++)
        if(!a[s1[i] - 97])
            a[s1[i] - 97] = 1;
    for(int i = 0; i < s2.length(); i++){
        if(a[s2[i] - 97] == 1){
            b = true;
            break;
        }
    }


    if(b)
        return "YES";
    else
        return "NO";
}

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string a, b;
        cin >> a;
        cin >> b;
        cout << twoStrings(a, b) << endl;
    }

    return 0;
}
