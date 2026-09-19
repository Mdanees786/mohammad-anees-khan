class Student {
public:
    int marks;

    Student(int m) {
        marks = m;
    }
};

int main() {
    Student s1(95);

    cout << s1.marks;
}