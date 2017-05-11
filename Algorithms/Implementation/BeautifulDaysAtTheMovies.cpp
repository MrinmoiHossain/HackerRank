#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int rev(int a);

int main(void)
{
    int a, b, k;
    cin >> a >> b >> k;

    int con = 0;
    for(int i = a; i <= b; i++){
        int m = rev(i);
        if(abs(i - m) % k == 0)
            con++;
    }

    cout << con << endl;

    return 0;
}

int rev(int a)
{
    int sum = 0;
    while(a){
        sum = sum * 10 + (a % 10);
        a /= 10;
    }
    return sum;
}
