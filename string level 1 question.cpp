#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	//Print a string.
	
	string str;    //input me hello anees liya tha
	getline(cin,str);
	cout<<str<<endl;
	
	//Find the length of a string (without using length()).
    cout<<str.length()<<endl;
    
    int count =0;
    for(char ch: str){
        if(ch!=0){
        count ++;
        }
        
    }
cout<<count<<endl;

  //Count vowels.
  int count1 =0;
  for(char ch2:str){
      if((ch2=='a')||(ch2=='i')||(ch2=='e')||(ch2=='o')||(ch2=='u')){
          count1++;
      }
  }
  cout<<" count vowel"<<" "<<count1<<endl;
  
  
 // Count consonants.
  
  
   int count2 =0;
  for(char ch3:str){
      if((ch3=='a')||(ch3=='i')||(ch3=='e')||(ch3=='o')||(ch3=='u')){
          continue;
          
      }
      count2++;
  }
  cout<<" count consonant"<<" "<<count2<<endl;
  
  string str2= "AbC123def567G5JIab";
  int count3;
  for(char ch:str2){
      if(ch>='0'&&ch<='9'){
          count3++;
      }
  }
  cout<<"count the digit"<<count3<<endl;
  
  //Count special characters.
  
  //similarly karna he jese uppar kiye he
  
  
  //Count uppercase letters.
  int count4= 0;
  for (char ch4 : str2) {
        if (isupper(ch4)) {
            count4++;
        }
    }
    
    cout<<"count uppercase"<<" "<<count4<<endl;
    
    
    //Count lowercase letters.
    int count5 = 0;
    for(char ch5:str2){
        if(ch5>='a'&&ch5<='z'){
            count5++;
        }
    }
    cout<<" count lower case"<<" "<<count5<<endl;
    
    //Count spaces.
   // use nomal method
   
   
 //  Reverse a string.
  
  reverse(str2.begin(), str2.end());

    cout << str2;

}
