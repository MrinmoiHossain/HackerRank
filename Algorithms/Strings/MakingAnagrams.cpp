#include <bits/stdc++.h>
using namespace std;

int makingAnagrams(string s1, string s2)
{
    vector<int> a(26, 0);
    for(int i = 0; i < s1.length(); i++)
        a[s1[i] - 97]++;
    for(int i = 0; i < s2.length(); i++)
        a[s2[i] - 97]--;

    int con = 0;
    for(int i = 0; i < 26; i++)
        con += abs(a[i]);

    return con;
}

int main(void)
{
    string a, b;
    cin >> a;
    cin >> b;

    cout << makingAnagrams(a, b) << endl;

    return 0;
}
