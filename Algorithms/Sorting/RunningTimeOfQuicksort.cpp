#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define pb push_back
using namespace std;

int insertion(vector<int>& a)
{
    int con = 0;
    for(int i = 1; i < a.size(); i++){
        int j = i;
        while(j >= 0 && a[j - 1] > a[j]){
            swap(a[j - 1], a[j]);
            j--;
            con++;
        }
    }

    return con;
}
int quickS(vector<int>& b, int f, int l, int *_SwapCount)
{
    int i, j;
    if(f < l){
        i = f + 1;
        j = l;

        while(b[i] < b[f])
            i++;
        while(b[j] > b[f])
            j--;

        if(i < j){
            swap(b[i], b[j]);
            *_SwapCount++;
            while(b[i] < b[f])
                i++;
            while(b[j] > b[f])
                j--;
        }
        swap(b[j], b[f]);
        *_SwapCount++;

        quickS(b, f, j - 1, _SwapCount);
        quickS(b, j + 1, l, _SwapCount);
    }

    return *_SwapCount;
}

int main(void)
{
    int n;
    cin >> n;
    vector<int>a;
    vector<int>b;

    for(int i = 0, k; i < n; i++){
        cin >> k;
        a.pb(k);
        b.pb(k);
    }

    cout << insertion(a) - quickS(b, 0, n - 1, 0) << endl;

    return 0;
}
