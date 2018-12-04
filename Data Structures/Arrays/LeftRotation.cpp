#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, k;
    cin >> N >> k;
    int arr[N];

    for (int i = 0; i < N; i++)
        cin >> arr[(i+N-k)%N];

     for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}
