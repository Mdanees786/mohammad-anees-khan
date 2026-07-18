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
void insertAtmiddle(Node*head,int value,int pos){
    Node*newnode = new Node(value);
    Node*temp = head;
    for(int i=0;i<pos-1;i++){
    temp = temp->next;
    }
newNode->next= temp->next;
temp->next= newNode;
    

}