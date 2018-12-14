#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

int combinationPermutation(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(void)
{
    double a;
    int b;
    cin >> a >> b;
    double boy = a/(a+b);
    double girl = 1 - boy;

    //cout << boy << " " << girl << endl;

    double sum = 0.0;
    for(int i = 3; i <= 6; i++){
        sum += combinationPermutation(6, i) * pow(boy, i) * pow(girl, 6 - i);
    }
    cout << fixed << setprecision(3) << sum << endl;

    return 0;
}
