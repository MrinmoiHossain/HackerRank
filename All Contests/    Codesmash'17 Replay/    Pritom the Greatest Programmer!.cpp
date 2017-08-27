#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    
    for(int i = 1; i <= T; i++){
        double r;
        scanf("%lf", &r);
        
        printf("Case #%d: %0.2lf\n", i, (r * r) / 2);
    }
    return 0;
}

