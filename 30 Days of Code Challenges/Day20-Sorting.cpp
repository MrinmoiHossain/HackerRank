#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int swapCont = 0;
    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0 && a[j - 1] > a[j]){
            swap(a[j - 1], a[j]);
            j--;
            swapCont++;
        }
    }

    cout << "Array is sorted in " << swapCont << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] << endl;

    return 0;
}
