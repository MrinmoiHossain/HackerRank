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
    
    vector<int> v(n);
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    sum /= n;
    double b = 0;
    for(int i = 0; i < n; i++){
        b += pow(v[i] - sum, 2);
    }
    b /= n;
    
    cout << fixed << setprecision(1) << sqrt(b) << endl;
    
    return 0;
}

