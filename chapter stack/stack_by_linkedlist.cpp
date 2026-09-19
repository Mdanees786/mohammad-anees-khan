#include <iostream>
#include <list>

using namespace std;

template <class T>
class Stack {
    list<T> ll;

public:

    void push(T value) {
        ll.push_front(value);
    }

    void pop() {
        if (isempty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        ll.pop_front();
    }

    T top() {
        if (isempty()) {
            cout << "Stack is empty" << endl;
            return T();
        }

        return ll.front();
    }

    bool isempty() {
        return ll.size() == 0;
    }
};

int main() {

    Stack<int> s;

    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    while (!s.isempty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}