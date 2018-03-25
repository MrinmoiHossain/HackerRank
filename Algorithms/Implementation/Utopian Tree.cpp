#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n)
{
    int d = n / 2;
    int m = (n % 2 == 0? 1:2);
    
    return (pow(2, d + m) - m);
}

int main(void)
{
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        cout << utopianTree(n) << endl;
    }
    
    return 0;
}

