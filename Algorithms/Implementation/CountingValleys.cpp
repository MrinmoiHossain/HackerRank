#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    char a;

    int con = 0, total = 0;
    for(int i = 0; i < n; i++){
        cin >> a;

        if(a == 'U')
            con++;
        if(a == 'D'){
            con--;
            if(con == -1)
                total++;
        }

    }
    cout << total << endl;

    return 0;
}
