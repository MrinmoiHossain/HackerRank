#include <bits/stdc++.h>
using namespace std;

int height(stack<int> a, stack<int> b, stack<int> c)
{
    while(1){
        if(a.empty() || b.empty() || c.empty())
            return 0;

        int atop = a.top(), btop = b.top(), ctop = c.top();
        //cout << atop << endl;
        if(atop == btop && btop == ctop)
            return atop;

        if(atop >= btop && atop >= ctop)
            a.pop();
        else if(btop >= atop && btop >= ctop)
            b.pop();
        else if(ctop >= atop && ctop >= btop)
            c.pop();

    }
}

stack<int> input(int n)
{
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    stack<int> s;
    int sm = 0;
    for(int i = n - 1; i >= 0; i--){
        sm += v[i];
        s.push(sm);
    }

    return s;
}

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    stack<int> as = input(a), bs = input(b), cs = input(c);

    cout << height(as, bs, cs) << endl;

    return 0;
}
