#include<iostream>
#include<queue>
using namespace std;
class Stack{
    deque<int>dq;
    public:
    void push(int data){
        dq.push_back(data);
    }
    void pop(){
        dq.pop_back();
    }
    int top(){
        return dq.back();
    }
};
int main(){
    Stack s;
    for(int i=1;i<=5;i++){
        s.push(i);
    }
    for(int i=1;i<=5;i++){
        cout<<s.top()<<endl;
        s.pop();
    }
return 0;
}