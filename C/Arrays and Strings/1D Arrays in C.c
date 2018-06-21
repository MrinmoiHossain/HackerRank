#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, a;
    int sum = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        sum += a;
    }
    
    printf("%d\n", sum);
    
    return 0;
}