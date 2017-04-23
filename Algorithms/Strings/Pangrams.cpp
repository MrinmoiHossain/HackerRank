#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    getline(cin, s);
    int len = s.length();

    if(len < 26){
        cout << "not pangram" << endl;
        return 0;
    }

    int arr[26] = {0};

    for(int i = 0; i < len; i++){
        arr[toupper(s[i]) - 65]++;
    }

    for(int i = 0; i < 26; i++){
        if(!arr[i]){
            cout << "not pangram" << endl;
            return 0;
        }
    }
    cout << "pangram" << endl;

    return 0;
}
