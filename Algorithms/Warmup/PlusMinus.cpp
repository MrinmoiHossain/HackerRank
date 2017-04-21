#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, a;
    cin >> n;

    int zero = 0, plusNumber = 0, minius = 0;
    for(int i = 0; i < n; i++){
        cin >> a;

        if(a == 0)
            zero++;
        else if(a > 0)
            plusNumber++;
        else
            minius++;
    }

    cout << fixed << setprecision(6) << (plusNumber * 1.0) / n << endl;
    cout << fixed << setprecision(6) << (minius * 1.0) / n << endl;
    cout << fixed << setprecision(6) << (zero * 1.0) / n << endl;

    return 0;
}
