#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    void change(Student &s) {
        s.marks = 100;
    }
};

int main() {
    Student s1;

    s1.marks = 50;

    s1.change(s1);

    cout << s1.marks;

    return 0;
}