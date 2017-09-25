#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int lowestTriangle(int base, int area)
{
    return ((2 * area) / base) + ((2 * area) % base != 0? 1 : 0);
}

int main()
{
    int base; 
    int area; 
    scanf("%d %d", &base, &area);

    int height = lowestTriangle(base, area);
    printf("%d\n", height);

    return 0;
}
