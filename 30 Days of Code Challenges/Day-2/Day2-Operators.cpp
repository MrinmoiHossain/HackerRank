#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(void)
{
    double a;
    int b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << "The total meal cost is " << fixed << setprecision(0) << (a + ((a * b) / 100) + ((a * c) / 100)) << " dollars." << endl;

    return 0;
}
