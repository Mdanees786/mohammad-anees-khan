#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"before reverse"<<endl;
    int*start = arr;
    int *end =arr+n-1;
    for(int i=0;i<n;i++)
    cout<<(*start+i)<<endl;

    while(start<end){
        int temp = *start;
        *start =*end;
        *end = temp;
        start++;
        end--;
    }
    cout<<"after reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }

    
}