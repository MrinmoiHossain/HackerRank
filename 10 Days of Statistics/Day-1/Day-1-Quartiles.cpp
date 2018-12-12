#include <bits/stdc++.h>
using namespace std;

int mid(vector<int> v);

int main(void)
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    vector<int> l, r;
    if(n & 1){
        for(int i = 0; i < n/2; i++)
            l.push_back(v[i]);
        for(int i = n / 2 + 1; i < n; i++)
            r.push_back(v[i]);
    }
    else{
        for(int i = 0; i < n/2; i++)
            l.push_back(v[i]);
        for(int i = n / 2; i < n; i++)
            r.push_back(v[i]);
    }

    cout << mid(l) << endl;
    cout << mid(v) << endl;
    cout << mid(r) << endl;

    return 0;
}

int mid(vector<int> v)
{
    int vs = v.size();
    int sum = v[vs/2];
    if(!(vs & 1)){
        sum += v[vs/2-1];
        sum /= 2;
    }
    return sum;
}
