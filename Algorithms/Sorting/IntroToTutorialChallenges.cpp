#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int V, n, a, pos;
    cin >> V;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == V)
            pos = i;
    }
    cout << pos << endl;

    return 0;
}
