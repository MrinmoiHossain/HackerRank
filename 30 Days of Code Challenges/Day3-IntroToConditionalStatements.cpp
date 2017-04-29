#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    if(N % 2 != 0)
        cout << "Weird" << endl;
    else if((N % 2 == 0) && (N >= 2 && N <= 5))
        cout << "Not Weird" << endl;
    else if((N % 2 == 0) && (N >= 6 && N <= 20))
        cout << "Weird" << endl;
    else if((N % 2 == 0) && (N > 20))
        cout << "Not Weird" << endl;

    return 0;
}
