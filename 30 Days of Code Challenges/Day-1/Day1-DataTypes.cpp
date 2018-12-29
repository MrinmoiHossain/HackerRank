#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main(void)
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j;
    double e;
    string m;

    cin >> j;
    cin >> e;
    if(getline(cin >> ws, m))
        getline(cin, m);

    cout << i + j << endl;
    cout << fixed << setprecision(1) << d + e << endl;
    cout << s + m << endl;

    return 0;
}
