#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value;
        next = nullptr;

    }
};
void pushAtfrant(Node*tail,int value){
    Node*newnode= new Node(value);
    if(tail == Null){
        tail = newNOde;
    }
    else{
        tail->next= nullptr;
        tail = newNode;

    }
    void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}
int main(){
    Node*tail=nullptr;
    pushAtfrant(tail,4);
    pushAtfrant(tail,4);
pushAtfrant(tail,4);
pushAtfrant(tail,4);


}

// notes  : tail se ham push frant nahi kar sakte he