#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{
    vi a(3), b(3);

    for(int i = 0; i < 3; i++)
        cin >> a[i];
    for(int i = 0; i < 3; i++)
        cin >> b[i];

    int alice = 0, bob = 0;
    for(int i = 0; i < 3; i++){
        if(a[i] > b[i])
            alice++;
        if(a[i] < b[i])
            bob++;
    }

    cout << alice << " " << bob << endl;

    return 0;
}
