#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string a, b;
    cin >> a;
    cin >> b;

    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;

    swap(a[0], b[0]);
    cout << a << " " << b << endl;

    return 0;
}
