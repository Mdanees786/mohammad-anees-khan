#include<iostream>
#include<list>

using namespace std;
template<class t>

class Stack{
list<t>ll;
public:
void push(int value){
ll.push_frant(value);
}
void pop(){
    ll.pop_frant();
}
t top(){
    return ll.frant();
}
bool isempty(){
   return list.size()==0; 
}
};
int main(){
Stack s;
s.push(3);
s.push(4);
s.push(5);
s.push(6);


}