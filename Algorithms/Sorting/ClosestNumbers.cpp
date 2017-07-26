#include <cmath>
#include <numeric>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    
    vector<int> dif(n);
    adjacent_difference(v.begin(), v.end(), dif.begin());
    int mn = *min_element(dif.begin() + 1, dif.end());
    
    for(int i = 1; i < n; i++)
        if(dif[i] == mn)
            cout << v[i - 1] << " " << v[i] << " ";
    cout << endl;
    
    return 0;
}

