#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int ll;
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        ll n, s, n3, n5, n15;
        cin >> n;
        n--;
        n3 = n / 3;
        n5 = n / 5;
        n15 = n / 15;
        
        s = ((3 * n3 * (n3 + 1)) / 2) + ((5 * n5 * (n5 + 1)) / 2) - ((15 * n15 * (n15 + 1)) / 2);
        
        cout << s << endl;
    }
    
    return 0;
}

