#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n)
{
    int len = s.length();
    long con = 0;
    for(int i = 0; i < len; i++)
        if(s[i] == 'a')
            con++;
    
    con *= n / len;
    
    for(int i = 0; i < n % len; i++)
        if(s[i] == 'a')
            con++;
    
    return con;
}

int main()
{
    string s;
    cin >> s;
    long n;
    cin >> n;\
        
    long result = repeatedString(s, n);
    cout << result << endl;
    
    return 0;
}

