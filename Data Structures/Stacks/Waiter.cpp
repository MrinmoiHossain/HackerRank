#include <bits/stdc++.h>
#define MAX 11002
using namespace std;

vector<int> prime;
bool primecheck[MAX];

void primeFunction(void)
{
    int limit = sqrt(MAX);

    primecheck[0] = 1, primecheck[1] = 1;
    for(int i = 4; i <= MAX; i += 2)
        primecheck[i] = 1;

    prime.push_back(2);
    for(int i = 3; i <= MAX; i += 2){
        if(!primecheck[i]){
            prime.push_back(i);

            if(i <= limit){
                for(int j = i * i; j <= MAX; j += i * 2)
                    primecheck[j] = 1;
            }
        }
    }
}

int main(void)
{
    primeFunction();
    //cout << v.size() << endl;
    int n, q;
    cin >> n >> q;

    stack<int> s;
    for(int i = 0, a; i < n; i++){
        cin >> a;
        s.push(a);
    }

    int con = 0;
    stack<int>v[1201];
    while(con < q){
        int p = prime[con];
        stack<int> temp;
        while(!s.empty()){
            if(s.top() % p == 0)
                v[con].push(s.top());
            else
                temp.push(s.top());
            s.pop();
        }
        s = temp;
        con++;
    }

    for(int i = 0; i < q; i++){
        while(!v[i].empty()){
            cout << v[i].top() << endl;
            v[i].pop();
        }
    }

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
