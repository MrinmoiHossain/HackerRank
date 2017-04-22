#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int grade;
        cin >> grade;

        if(grade > 0 && grade < 38)
            cout << grade << endl;
        else{
            int mod = ((grade / 5) * 5);
            if((grade - mod) == 3)
                cout << grade + 2 << endl;
            else if((grade - mod) == 4)
                cout << grade + 1 << endl;
            else
                cout << grade << endl;
        }
    }
    return 0;
}
