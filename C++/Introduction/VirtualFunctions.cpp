#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    string name;
    int age;
    public:
        void virtual getdata(){
            cin >> name >> age;
        }
        void virtual putdata(){
            cout << name << " " << age << " ";
        }
};

class Professor: public Person{
    int publications, id;
    static int t_id;
    public:
        Professor(){
            id = ++t_id;
        }
        void getdata(){
            Person::getdata();
            cin >> publications;
        }
        void putdata(){
            Person::putdata();
            cout << publications << " " << id << endl;
        }
};

class Student: public Person{
    int marks[6], id;
    static int t_id;
public:
    Student(){
        id = ++t_id;
    }
    void getdata(){
        Person::getdata();
        for(int i = 0; i < 6; i++)
            cin >> marks[i];
    }
    void putdata(){
        Person::putdata();
        int total = marks[0];

        for(int i = 1; i < 6; i++)
            total += marks[i];

        cout << total << " " << id << endl;
    }
};

int Professor::t_id = 0;
int Student::t_id = 0;

int main(void)
{
    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0; i < n; i++){
        cin >> val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for(int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
