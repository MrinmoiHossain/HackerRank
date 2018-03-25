#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    stack<long int> s;
    long int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(s.empty() || s.top() != temp)
            s.push(temp);
    }
    
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> temp;
        
        while(!s.empty() && temp >= s.top())
            s.pop();
        
        cout << s.size() + 1 << endl;
    }
    
    return 0;
}

