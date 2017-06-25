#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

template<class T>
    class AddElements{
        private:
            T a;
        public:
            AddElements(T arg){
                a = arg;
            }
            T add(T b){
                return a += b;
            }
            T concatenate(T b){
                return a += b;
            }
    };

int main(void)
{
    int n, i;
    cin >> n;

    for(i = 0; i < n; i++){
        string type;
        cin >> type;

        if(type == "float"){
            double element1,element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            cout << myfloat.add(element2) << endl;
        }
        else if(type == "int"){
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint (element1);
            cout << myint.add(element2) << endl;
        }
        else if(type == "string"){
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring (element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }

    return 0;
}
