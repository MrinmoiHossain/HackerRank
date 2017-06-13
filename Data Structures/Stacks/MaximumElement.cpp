#include <cmath>
#include <cstdio>
#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    stack<int> s;
    for(int i = 0, a; i < T; i++){
        cin >> a;

        if(a == 1){
            int b;
            cin >> b;

            if(s.empty())
                s.push(b);
            else
                s.push(max(b, s.top()));
        }
        else if(a == 2 and !s.empty())
            s.pop();
        else if(a == 3)
            cout << s.top() << endl;
    }

    return 0;
}
