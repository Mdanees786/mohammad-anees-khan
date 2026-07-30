#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
int key = 5;
bool found = false;
while(!st.empty()){
    if(key == st.top()){
        found = true;
        break;
    }
    st.pop();
}
if(found){
    cout<<"present"<<endl;
}
else{
    cout<<"not found"<<endl;
}
}
