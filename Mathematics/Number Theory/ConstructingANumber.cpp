#include <bits/stdc++.h>
using namespace std;

string check(string s);

int main(void)
{
    int t;
    cin >> t;

    for(int i = 0, n; i < t; i++){
        cin >> n;

        string s = "", ss;
        for(int j = 0; j < n; j++){
            cin >> ss;
            s += ss;
        }
        cout << check(s) << endl;
    }

    return 0;
}

string check(string s)
{
    int sum = 0;
    for(int i = 0; i < s.length(); i++)
        sum += int(s[i]);

    if(sum % 3 == 0)
        return "Yes";
    else
        return "No";
}
