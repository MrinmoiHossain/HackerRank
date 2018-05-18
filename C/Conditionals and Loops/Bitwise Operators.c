#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int mxAnd = 0, mxOr = 0, mxXor = 0;
    
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(mxAnd < (i & j) && (i & j) < k)
                mxAnd = i & j;
            if(mxOr < (i | j) && (i | j) < k)
                mxOr = i | j;
            if(mxXor < (i ^ j) && (i ^ j) < k)
                mxXor = i ^ j;
        }
    }
    printf("%d\n", mxAnd);
    printf("%d\n", mxOr);
    printf("%d\n", mxXor);
 
    return 0;
}
