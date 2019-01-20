#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n)
{
    int sm = 0;
    while(n){
        sm += (n % 10);
        n /= 10;
    }
    return sm;
}

int main(void)
{
    int n;
    cin >> n;

    int limit = sqrt(n);
    int mx = 0, sm, ans;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            sm = sumOfDigit(i);
            if(sm > mx){
                mx = sm;
                ans = i;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
