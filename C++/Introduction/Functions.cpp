#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);

    printf("%d\n", ans);

    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    if(a >= b && a >= c && a >= d)
        return a;
    else if(b >= a && b >= c && b >= d)
        return b;
    else if(c >= b && c >= a && c >= d)
        return c;
    else
        return d;
}
