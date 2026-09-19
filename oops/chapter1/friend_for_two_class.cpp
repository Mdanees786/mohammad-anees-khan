#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int x = 10;

public:
    friend void sum(A, B);
};

class B {
private:
    int y = 20;

public:
    friend void sum(A, B);
};

void sum(A a, B b) {
    cout << a.x + b.y;
}

int main() {
    A a;
    B b;

    sum(a, b);

    return 0;
}