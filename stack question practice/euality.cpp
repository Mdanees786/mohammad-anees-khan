#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>st2;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st2.push(1);
    st2.push(2);
    st2.push(3);
    st2.push(5  );
    bool found = false;
    while(!st.empty()){
        while(!st2.empty()){
            if(st.top()==st2.top()){
                found = true;
            }
            st2.pop();

        }
        st.pop();
    }
    if(found){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}