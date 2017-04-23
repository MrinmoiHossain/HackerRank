#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int a;
    long b;
    long long int c;
    char d;
    float e;
    double f;

    cin >> a >> b >> c >> d >> e >> f;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << fixed << setprecision(2) << e << endl;
    cout << fixed << setprecision(5) << f << endl;

    return 0;
}
