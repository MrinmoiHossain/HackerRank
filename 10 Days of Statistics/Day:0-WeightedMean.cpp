#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    
    double sum = 0.0, digit = 0;
    for(int i = 0; i < n; i++){
        sum += (a[i] * b[i]);
        digit += b[i];
    }
    
    cout << fixed << setprecision(1) << sum / digit << endl;
    
    return 0;
}

