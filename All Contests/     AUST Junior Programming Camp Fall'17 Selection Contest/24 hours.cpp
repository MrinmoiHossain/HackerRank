#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    for(int i = 0, a; i < t; i++){
        cin >> a;
        
        if(a >= 0 && a <= 23)
            cout << a + 1 << endl;
        else if(a == 24)
            cout << 1 << endl;
    }

    return 0;
}

