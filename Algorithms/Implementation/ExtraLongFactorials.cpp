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

    int arr[1000] = {0};
    arr[0] = 1;
    int len = 1;

    for(int i = 2; i <= n; i++){
        int d = 0;
        for(int j = 0; j < len; j++){
            int val = i * arr[j] + d;
            int tc = val % 10;
            arr[j] = tc;
            d = val / 10;
        }
        while(d){
            len++;
            int val = d % 10;
            arr[len - 1] = val;
            d /= 10;
        }
    }
    for(int i = len - 1; i >= 0; i--)
        cout << arr[i];

    cout << endl;

    return 0;
}
