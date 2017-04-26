#include <iostream>
#include <cmath>
using namespace std;

void update(int *a, int *b);

int main(void)
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;
    update(pa, pb);

    cout << a << endl;
    cout << b << endl;

    return 0;
}

void update(int *a, int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}
