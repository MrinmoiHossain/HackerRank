#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;

    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
           char ch = isupper(s[i])? 'A' : 'a';
            s[i] = ch + (s[i] + k - ch) % 26;
        }
    }

    cout << s << endl;

    return 0;
}
