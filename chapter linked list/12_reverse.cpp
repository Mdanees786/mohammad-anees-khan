#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data =value;
        next = nullptr;

    }
};
void pushAtfrant(Node*&head,int value){
Node*newNode= new Node(value);
if(head==nullptr){
    head= newNode;
}
else{
    newNode->next = head;
    head = newNode;
}
}
void reverse(Node*&head){
    Node*curr = head;
    Node*prev = nullptr;
    while(curr!=nullptr){
        Node*next = curr->next;
        curr->next = prev;
        prev= curr;
        curr = next;
    }
    head = prev;
}
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

        reverse(head);
        
         printList(head);

return 0;
}