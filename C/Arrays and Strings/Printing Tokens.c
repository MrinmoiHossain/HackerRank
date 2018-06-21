#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1001];
    scanf("%[^\n]%*c", s);
    
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == ' ')
            printf("\n");
        else
            printf("%c", s[i]);
    }
    
    return 0;
}
