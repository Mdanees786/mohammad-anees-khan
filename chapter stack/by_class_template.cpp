#include<iostream>
#include<vector>
using namespace std;

// create stack by class template

template <class t>
class stack{
    vector<t>vec;
    public:
   void push(t val){
        vec.push_back(val);

    }
    void pop(){
        vec.pop_back();
    }
    t top(){
       int lastindex = vec.size()-1;
       return vec[lastindex];
    }
    bool isempty(){
        return vec.size()==0;
    }
    
};
int main(){
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    return 0;
}