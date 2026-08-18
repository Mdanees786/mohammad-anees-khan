#include<iostream>
#include<queue>
using namespace std;

class Myqueue{
    deque<int>dq;
    public:
     void push(int data){
        dq.push_back(data);
     }
     void pop(){
        dq.pop_front();

        }
        int top(){
            return dq.front();
        }
     };

int main(){
Myqueue q;
for(int i=0;i<=5;i++){
    q.push(i);
}
for(int i=0;i<=5;i++){
    cout<<q.top()<<endl;
    q.pop();
}
return 0;
}