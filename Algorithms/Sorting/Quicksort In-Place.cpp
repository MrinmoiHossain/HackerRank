#include <bits/stdc++.h>
#define pb push_back
#define For(b) for(int i = 0; i < b; i++)
using namespace std;

void quickSort(vector<int>& arr, int f, int l);

int main(void)
{
    int n;
    cin >> n;

    vector<int> a;
    int temp;
    For(n){
        cin >> temp;
        a.pb(temp);
    }

    quickSort(a, 0, n - 1);

    For(n)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}

void quickSort(vector<int>& arr, int f, int l)
{
    int i, j;
    if(f < l){
        i = f + 1;
        j = l;

        while(arr[i] < arr[f])
            i++;
        while(arr[j] > arr[f])
            j--;

        if(i < j){
            swap(arr[i], arr[j]);
            while(arr[i] < arr[f])
                i++;
            while(arr[i] > arr[f])
                j--;
        }
        swap(arr[j], arr[f]);

        quickSort(arr, f, j - 1);
        quickSort(arr, j + 1, l);
    }
}
