#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
void nextgreater(vector<int>arr,vector<int>ans){
    stack<int>s;
    int idx = arr.size()-1;
    ans[idx] = -1;
    s.push(arr[idx]);
    for(idx =idx-1;)
}