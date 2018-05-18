#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    
    while(n){
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
    
    return 0;
}