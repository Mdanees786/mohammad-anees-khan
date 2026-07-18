#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value;
        next =nullptr;

    }
    ~Node(){
        cout<<"delete list"<<endl;
        if(next != nullptr){
            delete next;
        }
    }
};

void createnode(Node*&head,int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        head = newNode;
    }
    else{
        newNode->next= head;
        head = newNode;
    }
}
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}
int main(){
Node*head = nullptr;
createnode(head,1);
createnode(head,2);
createnode(head,3);
createnode(head,4);
printList(head);

delete head;
head = nullptr;
}