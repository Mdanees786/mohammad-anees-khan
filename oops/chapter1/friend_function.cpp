#include <iostream>
using namespace std;

class Student {
private:
    int marks = 90;

public:
    friend void display(Student s);
};

void display(Student s) {
    cout << s.marks;
}

int main() {
    Student s1;

    display(s1);

    return 0;
}