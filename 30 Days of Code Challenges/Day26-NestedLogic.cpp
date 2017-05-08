#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int d, d1, m, m1, y, y1;

    cin >> d >> m >> y;
    cin >> d1 >> m1 >> y1;

    if(y == y1){
        if(m == m1){
            if(d <= d1)
                cout << "0" << endl;
            else
                cout << 15 * (d - d1);
        }
        else if(m < m1)
            cout << "0" << endl;
        else
            cout << 500 * (m - m1);
    }
    else if(y < y1)
        cout << "0" << endl;
    else
        cout << "10000" << endl;

    return 0;
}
