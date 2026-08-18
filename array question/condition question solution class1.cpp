#include <bits/stdc++.h>
using namespace std;

int main() {
	
//	Check Positive, Negative or Zero

int n;
cin>>n;
if(n>0){
    cout<<"positive"<<endl;
}
else if(n<0){
    cout<<"negative"<<endl;
}
else{
    cout<<"zero"<<endl;
}

//Check Even or Odd

if(n%2==0)
{
    cout<<"even"<<endl;
    
}
else{
    cout<<"odd"<<endl;
}

  //Check Leap Year
  
  if(n%4==0){
      cout<<"leap year"<<endl;
  }
  else{
      cout<<"not a leap year"<<endl;
  }
  
  //Largest of Two Numbers
  
  int a,b;
  cin>>a>>b;
  if(a>b){
      cout<<a<<" "<<"largest"<<endl;
  }
  
  else{
      cout<<b<<" "<<"b is largest"<<endl;
  }
  
  //Largest of Three Numbers
  
  int c;
  cin>>c;
  if((a>b)&&(a>c)){
      cout<<"a is largest"<<endl;
  }
  else if((b>a)&&(b>c)){
      cout<<"b is largest"<<endl;
  }
  else{
      cout<<"c is largest"<<endl;
  }
  
  
  //Check Vowel or Consonant
  char l;
  cin>>l;
  
  if((l=='a')|| (l=='i')||(l=='o')||(l=='u')||(l=='e')){
      cout<<"vowel"<<endl;
  }
  else{
      cout<<"consonant"<<endl;
  }
  
  
  //Check Divisible by 5 and 11
  
  if((n%5==0)&&(n%11==0)){
      cout<<"yes"<<endl;
  }
  else{
      cout<<"no"<<endl;
  }
  
  
  
  //Check Uppercase or Lowercas
  
  char ch;
    
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase Letter";
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase Letter";
    }
    else {
        cout << "Not an alphabet";
    }
}
