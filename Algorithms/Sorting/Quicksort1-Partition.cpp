#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int f, int l);

int main(void)
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

void quickSort(int arr[], int f, int l)
{
    int i, j;
    if(f < l){
        i = f + 1;
        j = l;

        while(arr[i] < arr[f])
            i++;
        while(arr[j] > arr[f])
            j--;

        while(i < j){
            swap(arr[i], arr[j]);
            while(arr[i] < arr[f])
                i++;
            while(arr[j] > arr[f])
                j--;
        }
        swap(arr[j], arr[f]);
    }
}
