#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
void pushAtfrant(Node*&head,int value){
    Node*newNode = new Node(value);
    if(head==NULL){
    head = newNode;
    }
    else{
    newNode->next = head;
    head= newNode;
    }
};
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}
int main(){
    Node*head = NULL;
    pushAtfrant(head,3);
     pushAtfrant(head,4);
      pushAtfrant(head,5);
       pushAtfrant(head,1);
        pushAtfrant(head,8);
        printList(head);
return 0;
}