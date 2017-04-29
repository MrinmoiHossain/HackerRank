#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
    int T;
    cin >> T;
    getchar();

    for(int i = 0; i < T; i++){
        string s;
        getline(cin, s);

        for(int j = 0; s[j]; j++)
            if(j % 2 == 0)
                cout << s[j];
        cout << " ";
        for(int j = 1; s[j]; j++)
            if(j % 2 != 0)
                cout << s[j];
        cout << endl;
    }

    return 0;
}
