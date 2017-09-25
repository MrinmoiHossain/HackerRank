#include <bits/stdc++.h>
using namespace std;

int alternatingCharacters(string s)
{
    char ch = s[0];
    int con = 0;
    
    for(int i = 1; i < s.length(); i++){
        if(ch == s[i]){
            con++;
            while(ch != s[i]){
                con++;
                i++;
            }
        }
        else
            ch = s[i];
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
        
        cout << alternatingCharacters(s) << endl;
    }
    
    return 0;
}

