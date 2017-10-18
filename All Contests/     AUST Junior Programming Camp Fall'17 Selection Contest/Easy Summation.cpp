#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    ll n;
    for(int i = 0; i < t; i++){
        cin >> n;
        
        if(n % 2 == 0){
            n /= 2;
            cout << (n * n) - (n * (n + 1))<< endl;
        }
        else{
            n /= 2;
            cout << ((n + 1) * (n + 1)) - (n * (n + 1)) << endl;
        }
    }
    
    return 0;
}

