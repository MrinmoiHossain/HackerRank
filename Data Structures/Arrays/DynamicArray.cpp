#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    
    vector<int> v[n];
    int lastAnswer = 0;
    for(int i = 0, t, x, y; i < q; i++){
        cin >> t >> x >> y;
        
        if(t == 1){
           v[(x ^ lastAnswer) % n].push_back(y); 
        }
        else{
            lastAnswer = v[(x ^ lastAnswer) % n][y % v[(x ^ lastAnswer) % n].size()];
            cout << lastAnswer << endl;
        }
    }
    
    return 0;
}

