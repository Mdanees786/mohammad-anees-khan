#include<iostream>
#unclude<stack>
using namespace std;
class queue{
    stack<int>st;
    stack<int>st2;
    public:
    void push(int data){
while(!st.empty()){
    st2.push(st.top());
    st.pop();

}

    }
    void pop{

    }   
}
int main(){

}