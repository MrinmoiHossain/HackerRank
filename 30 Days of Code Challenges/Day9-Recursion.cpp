#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define LL long long int
using namespace std;

LL factorial(LL n);

int main(void)
{
    LL n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}

LL factorial(LL n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
