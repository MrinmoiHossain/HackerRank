#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;

    vector<string> v;
    for(int i = 0; i < t; i++){
        string name, email;
        cin >> name >> email;

        size_t found = email.find("@gmail.com");
        if(found != string::npos)
            v.push_back(name);
    }
    sort(v.begin(), v.end());
    for(string s : v)
        cout << s << endl;

    return 0;
}
