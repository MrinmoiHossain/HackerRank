#include <bits/stdc++.h>
using namespace std;

double mid(vector<int> v);

int main(void)
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0, temp; i < n; i++)
        cin >> v[i];

    for(int i = 0, temp; i < n; i++){
        cin >> temp;

        for(int j = 0; j < temp - 1; j++)
            v.push_back(v[i]);
    }
    sort(v.begin(), v.end());
    int vs = v.size();

    vector<int> l, r;
    if(vs & 1){
        for(int i = 0; i < vs/2; i++)
            l.push_back(v[i]);
        for(int i = vs/2+1; i < vs; i++)
            r.push_back(v[i]);
    }
    else{
        for(int i = 0; i < vs/2; i++)
            l.push_back(v[i]);
        for(int i = vs/2; i < vs; i++)
            r.push_back(v[i]);
    }

    cout << fixed << setprecision(1) << mid(r) - mid(l) << endl;

    return 0;
}

double mid(vector<int> v)
{
    int vs = v.size();

    double sum = v[vs/2];

    if(!(vs & 1)){
        sum += v[vs/2 - 1];
        sum /= 2;
    }

    return sum;
}
