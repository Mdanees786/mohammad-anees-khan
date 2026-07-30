#include<iostream>
using namespace std;
void subarray(int *arr,int n){
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
cout<<"("<<i<<", "<<j<<")";
    }
    cout<<endl;
}
}
int main(){
    int arr[5] ={1,2,3,4,5};
    int n=5;
subarray(arr,5);
return 0;
}