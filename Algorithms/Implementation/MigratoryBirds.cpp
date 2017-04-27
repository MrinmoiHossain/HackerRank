#include <bits/stdc++.h>
using namespace std;

int mx(int arr[]);

int main(void)
{
    int n;
    cin >> n;

    int arr[5] = {0};
    int a;

    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 1)
            arr[0]++;
        else if(a == 2)
            arr[1]++;
        else if(a == 3)
            arr[2]++;
        else if(a == 4)
            arr[3]++;
        else if(a == 5)
            arr[4]++;
    }

    cout << mx(arr) << endl;

    return 0;
}

int mx(int arr[])
{
    int mx = arr[0], index = 0;
    for(int i = 0; i < 5; i++)
        if(mx < arr[i]){
            index = i;
            mx = arr[i];
         }
    return index + 1;
}
