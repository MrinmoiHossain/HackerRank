#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[103] = {0}, total = 0;
    for(int i = 0, a; i < n; i++){
        cin >> a;
        arr[a]++;
        total++;
    }

    int mx = arr[0];
    for(int i = 0; i < 101; i++)
        if(mx < arr[i])
            mx = arr[i];

    cout << total - mx << endl;

    return 0;
}
