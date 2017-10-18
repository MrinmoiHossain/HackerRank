#include <bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    double r, temp;
    
    while(cin >> r){
        temp = ((4 - pi) * r * r) / 4;
        double theta = 2 * atan(0.5);
        double in = (r * r * (pi - theta - sin(theta))) / 2;
        double ex = (r * r) - temp - in;
        cout << fixed << setprecision(6) << (4 * temp) - ex << endl;
    }
    
    return 0;
}

