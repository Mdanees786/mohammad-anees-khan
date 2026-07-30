#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

void pushBack(Node* &head, int value){
    Node* newNode = new Node(value);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
}

void popBack(Node* &head){

    // Case 1: Empty List
    if(head == nullptr){
        cout << "List is empty" << endl;
        return;
    }

    // Case 2: Only one node
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }

    // Case 3: More than one node
    Node* temp = head;

    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

void printList(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    Node* head = nullptr;

    pushBack(head,10);
    pushBack(head,20);
    pushBack(head,30);
    pushBack(head,40);

    cout << "Before Pop Back: ";
    printList(head);

    popBack(head);

    cout << "After Pop Back: ";
    printList(head);

    return 0;
}