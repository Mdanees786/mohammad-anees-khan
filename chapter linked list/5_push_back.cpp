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
void pushAtback( Node*&head,Node*&tail,int value ){
    Node*newNode = new Node(value);
    if(head==nullptr){
      tail=  head = newNode;
    }

    else{
        tail->next= newNode;
        tail=newNode;
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
    Node*tail = nullptr;
pushAtback(head,tail,2);
pushAtback(head,tail,5);
pushAtback(head,tail,3);
pushAtback(head,tail,10);
pushAtback(head,tail,1);
printList(head);
return 0;
}