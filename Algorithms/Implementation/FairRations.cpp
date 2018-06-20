#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    
    int sum = 0, con = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
        
        if(sum % 2)
            con += 2;
    }
    
    if(sum % 2)
        cout << "NO" << endl;
    else
        cout << con << endl;
        
    
    return 0;
}