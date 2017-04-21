#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++)
            cout << " ";
        for(int j = 0; j < i + 1; j++)
            cout << "#";

        cout << endl;
    }
}
