#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node*next;
    Node(int value){
        data = value;
        next =nullptr;
    }

};
void pushAtback( Node*&head,int value ){
    Node*newNode = new Node(value);
    if(head==nullptr){
        head = newNode;
        return;
    }
    Node*temp = head;
    while(temp->next!= nullptr){
         temp = temp->next;
    }
    temp->next = newNode;
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
pushAtback(head,2);
pushAtback(head,5);
pushAtback(head,3);
pushAtback(head,10);
pushAtback(head,1);
printList(head);
return 0;
}

// notes karne bali baat ye he ki issme time complexity big of n hogi