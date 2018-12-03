#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int d1, d2, m1, m2, y1, y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    int hack = 0;
    if(y1 > y2)
        hack += 10000;
    else if(y1 <= y2){
        if(m1 > m2 && y1 == y2)
            hack += 500 * (m1 - m2);
        else if(m1 <= m2){
            if(d1 > d2 && m1 == m2 && y1 == y2)
                hack += 15 * (d1 - d2);
        }

    }

    cout << hack << endl;

    return 0;
}
