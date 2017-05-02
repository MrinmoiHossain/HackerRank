#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool prime(int n);

int main(void)
{
    int T, n;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> n;

        if(prime(n))
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;
    }

    return 0;
}

bool prime(int n)
{
    if(n <= 1)
        return 0;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}
