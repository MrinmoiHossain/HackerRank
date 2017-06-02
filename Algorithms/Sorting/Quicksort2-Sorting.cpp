#include <bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector<int>& arr)
{
    vector<int> left, right;
    int f;

    if(arr.size() <= 1)
        return arr;

    f = arr[0];

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] <= f)
            left.push_back(arr[i]);
        else
            right.push_back(arr[i]);
    }

    left = quickSort(left);
    right = quickSort(right);
    left.push_back(f);
    for(int i = 0; i < right.size(); i++)
        left.push_back(right[i]);

    for(int i = 0; i < left.size(); i++)
        cout << left[i] << " ";
    cout << endl;

    return left;
}

int main(void)
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    a = quickSort(a);

    return 0;
}
