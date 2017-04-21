#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
    int hour, minute, second;
    char jone[3], ch, ch1;

    cin >> hour >> ch >> minute >> ch1 >> second >> jone;

    if(strcmp(jone,"PM") == 0 && hour != 12)
        hour += 12;
    else if(strcmp(jone,"AM") == 0 && hour == 12)
        hour = 0;

    printf("%02d:%02d:%02d\n", hour, minute, second);

    return 0;
}
