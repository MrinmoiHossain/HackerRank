#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long int ll;
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    
    for(int i = 0; i < T; i++){
        ll a, b;
        cin >> a;
        b = a;
        
        int con = 0;
        while(b > 0){
            int lastdigit = b % 10;
            b /= 10;
            if(lastdigit != 0 and a % lastdigit == 0)
                con++;
        }
        
        cout << con << endl;
    }
    
    return 0;
}

