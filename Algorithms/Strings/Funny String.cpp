#include <bits/stdc++.h>
using namespace std;

string funnyString(string b)
{
    string a = b;
    reverse(b.begin(), b.end());
    
    for(int i = 1; i < a.length(); i++){
        if(abs(a[i] - a[i-1]) != abs(b[i] - b[i-1])){
            return "Not Funny";
        }
    }
    
    return "Funny";
}

int main()
{
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        
        string result = funnyString(s);
        cout << result << endl;
    }
    
    return 0;
}

