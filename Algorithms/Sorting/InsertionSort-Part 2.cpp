#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n);

int main(void)
{
    int N;
    cin >> N;
    int arr[N];

    for(int i = 0; i < N; i++)
        cin >> arr[i];

    insertionSort(arr, N);

    return 0;
}

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++){
        int k = i;
        while(k > 0 && arr[k - 1] > arr[k]){
            int temp = arr[k];
            arr[k] = arr[k - 1];
            arr[k - 1] = temp;
            k--;
        }
        for(int j = 0; j < n; j++)
            cout << arr[j] << " ";
        cout << endl;
    }
}
