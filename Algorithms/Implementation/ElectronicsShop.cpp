#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int>keyboards, vector<int>drives, int s)
{
    int buy = -1;
    for(int i = 0; i < keyboards.size(); i++){
        if(keyboards[i] >= s) continue;

        for(int j = 0; j < drives.size(); j++){
            if(drives[j] >= s) continue;

            if((keyboards[i] + drives[j] <= s) && keyboards[i] + drives[j] > buy)
                buy = keyboards[i] + drives[j];
        }
    }

    return buy;
}

int main(void)
{
    int s;
    int n;
    int m;
    cin >> s >> n >> m;

    vector<int> keyboards(n);
    for(int i = 0; i < n; i++)
       cin >> keyboards[i];

    vector<int> drives(m);
    for(int i = 0; i < m; i++)
       cin >> drives[i];

    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;

    return 0;
}
