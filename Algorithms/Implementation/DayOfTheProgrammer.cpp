#include <bits/stdc++.h>
using namespace std;

bool check(int year){
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main(void)
{
    int year;
    cin >> year;

    if(year >= 1700 && year <= 1917){
        if(year % 4 == 0)
            cout << "12.09." << year << endl;
        else
            cout << "13.09." << year << endl;
    }
    else if(year == 1918)
        cout << "26.09." << year << endl;
    else if(year > 1918){
        if(check(year))
            cout << "12.09." << year << endl;
        else
            cout << "13.09." << year << endl;
    }

    return 0;
}
