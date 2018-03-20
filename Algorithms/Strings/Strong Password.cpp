#include <bits/stdc++.h>
using namespace std;

int minimumNumber(int n, string password)
{
    int con = 0;
    //bool digit = false, low = false, upp = false, spec = false;
    bool a[4] = {false};
    
    for(int i = 0; i < password.length(); i++){
        if(password[i] >= 'A' && password[i] <= 'Z')
            a[2] = true;
        else if(password[i] >= 'a' && password[i] <= 'z')
            a[1] = true;
        else if(password[i] >= '0' && password[i] <= '9')
            a[0] = true;
        else
            a[3] = true;
    }
    for(int i = 0; i < 4; i++)
        if(!a[i])
            con++;
    
    return max(con, 6 - n);
}

int main()
{
    int n;
    cin >> n;
    
    string password;
    cin >> password;
    
    cout << minimumNumber(n, password) << endl;
    
    return 0;
}

