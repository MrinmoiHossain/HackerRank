#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(vector<int>ar);

int main(void)
{
    vector<int>arr;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    insertionSort(arr);

    return 0;
}

void insertionSort(vector<int>ar)
{
    int j = ar.size() - 1;
    int last = ar[j];
    while(j >= 1 && ar[j - 1] > last){
        ar[j] = ar[j - 1];
        j--;
        for(int i = 0; i < ar.size(); i++)
            cout << ar[i] << " ";
        cout << endl;
    }
    ar[j] = last;

    for(int i = 0; i < ar.size(); i++)
        cout << ar[i] << " ";
    cout << endl;
}
