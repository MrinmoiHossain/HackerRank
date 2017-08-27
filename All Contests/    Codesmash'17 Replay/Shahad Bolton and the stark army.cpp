#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int tc = 0, n; tc < T; tc++){
        cin >> n;
        
        for(int i = 0; i < n; i++)
            cout << "*";
        cout << endl;
        
        if(n > 2){
            for(int i = 0; i < n - 2; i++){
                cout << "*";
                for(int j = 0; j < n - 2; j++)
                    cout << " ";
                cout << "*" << endl;
            }
        }
        
        if(n > 1)
            for(int i = 0; i < n; i++)
                cout << "*";
        cout << endl;

        if(n > 1)
            cout << endl;
    }
    return 0;
}

