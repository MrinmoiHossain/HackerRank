#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;

    while(T--){
        double A, B, C;
        cin >> A;
        cin >> B;
        cin >> C;

        cout << setw(0) << showbase << hex << left << nouppercase << (long long)A << endl;
        cout << setw(15) << fixed << setprecision(2) << setfill('_') << right << showpos << B << endl;
        cout << setw(15) << scientific << setprecision(9) << left << noshowpos << uppercase << C << endl;
    }

    return 0;
}
