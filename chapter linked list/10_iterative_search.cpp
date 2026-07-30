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
int iteratesearch(Node*head,int key){
    Node*temp = head;
    int index=0;
    while(temp !=nullptr){
        if(temp->data==key){
return index;
        }
        temp =temp->next;
        index++;
    }
    return -1;
}
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL"<<endl;
}
int main(){
    Node*head = NULL;
    pushAtfrant(head,3);
     pushAtfrant(head,4);
      pushAtfrant(head,5);
       pushAtfrant(head,1);
        pushAtfrant(head,8);
        printList(head);
        cout<<"index is"<<iteratesearch(head,3)<<endl;
return 0;
}