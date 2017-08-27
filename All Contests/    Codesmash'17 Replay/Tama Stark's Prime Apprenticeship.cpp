#include <bits/stdc++.h>
#define MX 10001001
using namespace std;

bool status[MX];
vector<int>prime;

void seive()
{
    int limit = sqrt(MX);
    status[0] = status[1] = 1;
    
    for(int i = 4; i <= MX; i += 2)
        status[i] = 1;
    
    prime.push_back(2);
    
    for(int i = 3; i <= MX; i += 2){
        if(!status[i]){
            prime.push_back(i);
            
            if(i <= limit)
                for(int j = i * i; j <= MX; j += i + i)
                    status[j] = 1;
        }
    }
}
int main()
{
    seive();
    int T;
    cin >> T;
    
    for(int i = 1, l, r, k; i <= T; i++){
        cin >> l >> r >> k;
        
        if(l > r)
            swap(l, r);
        
        int con = 0;
        for(int j = 0; j < prime.size(); j++){
            if(prime[j] >= l && prime[j] + k <= r){
                if(!status[prime[j]+k])
                    con++;
            }
        }
        cout << con << endl;
    }
    return 0;
}

