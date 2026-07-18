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
    void pop_frant(Node*&head){
        if(head==nullptr){
            cout<<"empty"<<endl;
            return;
        }
        Node*temp = head;
        head= head->next;
        temp->next =nullptr;
        delete temp;


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
pop_frant(head);
pop_frant(head);


// delete head;
// head = nullptr;
}