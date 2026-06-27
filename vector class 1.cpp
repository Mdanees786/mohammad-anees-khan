#include <bits/stdc++.h>
using namespace std;

int main() {

 //Print all elements of a vector.
 int n;
 cin>>n;
 vector<int>vec(n);
 for(int i=0;i<n;i++){
     cin>>vec[i];
}
for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
}
cout<<endl;

//Find the sum of all elements.

int sum =0;
for(int i=0;i<n;i++){
    sum += vec[i];
}
cout<<"sum of element"<<sum<<endl;

//Find the average of elements.

double avg = sum/n;
cout<<"average"<<avg<<endl;

//Find the maximum element.

int max = vec[0];
for(int i=1;i<n;i++){
    if(max<vec[i]){
        max= vec[i];
    }
}
cout<<"max element"<<max<<endl;


//Find the minimum element.
int min = vec[0];
for(int i=1;i<n;i++){
    if(min>vec[i]){
        min= vec[i];
    }
}
cout<<"min element"<<min<<endl;

//Count even and odd numbers.

int even =0,odd=0;
for(int i=0;i<n;i++){
    if(vec[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
    
}
cout<<"even count"<<" "<<even<<endl;
cout<<"odd count"<<" "<<odd<<endl;

//Search an element.

int key;
cin>>key;
bool found= false;
for(int i=0;i<n;i++){
    if(key==vec[i]){
        found= true;
        break;
    }
    
}
if(found){
    cout<<"preset"<<endl;
}
else{
    cout<<"not present "<<endl;
}


//Count occurrences of an element.


int x;
cin>>x;
int count =0;
for(int i=0;i<n;i++){
    if(x==vec[i]){
        count++;   
        }
}
cout<<"x count "<<" "<<count<<endl;

//Reverse a vector.


for(int i=n-1;i>=0;i--){
    cout<<vec[i]<<" ";
}

}

