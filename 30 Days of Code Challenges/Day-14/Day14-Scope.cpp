#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Difference{
    private:
        vector<int>elements;

    public:
        int maximumDifference;
        Difference(vector<int> a){
            elements = a;
        }

        void computeDifference(){
            int mn = *min_element(elements.begin(), elements.end()); // we use * because of iterator
            int mx = *max_element(elements.begin(), elements.end());

            maximumDifference = mx - mn;
        }
};

int main(void)
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
