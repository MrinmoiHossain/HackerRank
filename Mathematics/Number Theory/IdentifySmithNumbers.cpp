#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define mx 1100007
using namespace std;

bool status[mx];
vector<int> Prime;

int digitOfSum(int n)
{
    int sum = 0;
    while(n){
        sum += (n % 10);
        n /= 10;
    }
    
    return sum;
}

void seive()
{
    int limit = sqrt(mx);
    
    status[0] = status[1] = 1;
    for(int i = 4; i <= mx; i += 2) status[i] = 1;
    
    Prime.push_back(2);
    for(int i = 3; i <= mx; i += 2){
        if(!status[i]){
            Prime.push_back(i);
            if(i <= limit){
                for(int j = i * i; j <= mx; j += i + i){
                    status[j] = 1;
                }
            }
        }
    }
}

int PrimeFactor(int n)
{
    int sum = 0;
    for(int i = 0; Prime[i] <= n; i++){
        if(n % Prime[i] == 0){
            while(n % Prime[i] == 0){
                n /= Prime[i];
                sum += (Prime[i] <= 9 ? Prime[i] : digitOfSum(Prime[i]));
            }
        }
    }
    
    return sum;
}

int main()
{
    seive();
    int n;
    cin >> n;
    
    if(digitOfSum(n) == PrimeFactor(n))
        cout << 1 << endl;
    else
        cout << 0 << endl;
    
    return 0;
}

