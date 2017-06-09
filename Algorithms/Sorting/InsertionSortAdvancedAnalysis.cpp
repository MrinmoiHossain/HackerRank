#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int insertion(int a[], int n);

int main()
{
    int T;
    cin >> T;

    for(int tc = 1, n; tc <= T; tc++){
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        cout << insertion(arr, n) << endl;
    }

    return 0;
}

int insertion(int a[], int n)
{
    long long temp = 0;
    for(int i = 1; i < n; i++){
        int j = i;
        while(j >= 0 && a[j - 1] > a[j]){
            swap(a[j - 1], a[j]);
            j--;
            temp++;
        }
    }

    return temp;
}
