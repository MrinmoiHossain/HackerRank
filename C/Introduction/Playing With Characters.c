#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 10000

int main() 
{
    char c, temp;
    scanf("%c", &c);
    scanf("%c", &temp);
    
    char s[100];
    scanf("%s", s);
    scanf("%c", &temp);
    
    char sn[MAX_LEN];
    scanf("%[^\n]%*c", sn);
    
    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s\n", sn);
    
    return 0;
}