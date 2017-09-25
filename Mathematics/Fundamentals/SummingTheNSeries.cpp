#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define mod 1000000007
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        long long int n;
        cin >> n;
        
        cout << ((n % mod) * (n % mod)) % mod << endl;
    }

    return 0;
}
