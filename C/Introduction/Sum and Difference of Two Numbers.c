#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double c, d;
    scanf("%lf %lf", &c, &d);
    
    printf("%d %d\n", a+b, a-b);
    printf("%0.1lf %0.1lf\n", c+d, c-d);
    
    return 0;
}