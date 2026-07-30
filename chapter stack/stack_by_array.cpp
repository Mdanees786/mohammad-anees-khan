#include <iostream>
using namespace std;

const int MAX = 10;  
int stack[MAX];
int top = -1;

bool isEmpty() {
    return (top == -1);
}

bool isFull() {
    return (top == MAX - 1);
}

void push(int value) {
    if (isFull()) {
     cout << "Stack overflow" << endl;
    } 
    else {
        ++top;
        stack[top] = value;
        cout << value << " pushed into the stack" << endl;
     }
}

 void pop() {
    if (isEmpty()) {
        cout << "Stack underflow" << endl;
         } else {
       cout << stack[top] << " popped from the stack" << endl;
        top--;
    }
}

 void peek() {
    if (isEmpty()) {
         cout << "Stack is empty" << endl;
     } else {
         cout << "Top element is: " << stack[top] << endl;
     }
 }

void display() {
     if (isEmpty()) {
        cout << "Stack is empty" << endl;
     } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(1);
    push(2);
    push(3);
     push(4);
      push(5);
       push(6);
        push(7);
         push(8);
          push(9); 
           push(10);
            
    display();
    peek();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
pop();
    pop();
    display();
    return 0;
}
