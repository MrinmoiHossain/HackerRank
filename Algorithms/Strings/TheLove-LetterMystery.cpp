#include <bits/stdc++.h>
using namespace std;

int theLoveLetterMystery(string s)
{
    int len = s.length();
    int mid = len / 2;
    int con = 0;
    
    for(int i = 0; i < mid; i++){
        con += abs(s[i] - s[len - 1 - i]);
    }
    
    return con;
}

int main()
{
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        
        cout << theLoveLetterMystery(s) << endl;
    }
    
    return 0;
}

