#include <bits/stdc++.h>
using namespace std;

int solve(int n, int p);

int main(void)
{
    int n, p;
    cin >> n;
    cin >> p;

    int result = solve(n, p);

    cout << result << endl;

    return 0;
}

int solve(int n, int p)
{
    if(p / 2 <= (n - p) / 2)
        return p / 2;
    else{
       if(n % 2 == 0 && n - p == 1 )
            return 1;
       else
        return (n - p) / 2;
    }
}
