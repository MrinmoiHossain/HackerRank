#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, m;

    cin >> n >> m;
    int arr[n], sum = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i != m)
            sum += arr[i];
    }
    sum /= 2;

    int b;
    cin >> b;
    int dif = b - sum;

    if(dif == 0)
        cout << "Bon Appetit" << endl;
    else
        cout << dif << endl;

    return 0;
}
