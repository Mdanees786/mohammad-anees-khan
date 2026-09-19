#include <iostream>
using namespace std;

class Sum {
public:
    int length;
    int breadth;

    int area();
};

int Sum::area() {
    return length * breadth;
}

int main() {
    Sum s1;

    s1.length = 10;
    s1.breadth = 5;

    cout << "Area = " << s1.area();

    return 0;
}