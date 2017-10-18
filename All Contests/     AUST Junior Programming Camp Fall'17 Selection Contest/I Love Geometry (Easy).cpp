#include <bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)

int main()
{
    double r, temp = (8 - 2 * pi);
    
    while(cin >> r){
        cout << fixed << setprecision(6) << (r * r * temp) / 2 << endl;
    }
    
    return 0;
}

