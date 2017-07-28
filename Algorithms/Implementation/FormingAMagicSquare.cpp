#include <bits/stdc++.h>
using namespace std;

int main()
{
    int magic[8][3][3] = {
		{{8,1,6},{3,5,7},{4,9,2}},
		{{4,3,8},{9,5,1},{2,7,6}},
		{{2,9,4},{7,5,3},{6,1,8}},
		{{6,7,2},{1,5,9},{8,3,4}},
		{{6,1,8},{7,5,3},{2,9,4}},
		{{8,3,4},{1,5,9},{6,7,2}},
		{{4,9,2},{3,5,7},{8,1,6}},
		{{2,7,6},{9,5,1},{4,3,8}}
    };
    
    vector<vector<int> > s(3, vector<int>(3));
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> s[i][j];
    
    int mn = 99999;
    for(int i = 0; i < 8; i++){
        int temp = 0;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                temp += abs(magic[i][j][k] - s[j][k]);
            }
        }
        mn = min(mn, temp);
    }
    cout << mn << endl;
    
    return 0;
}

