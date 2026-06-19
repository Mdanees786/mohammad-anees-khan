#include <bits/stdc++.h>
using namespace std;

int main() {
	//Create a vector and display all elements
	vector<int>vec={1,2,3,4,5,6};
	for(int i=0;i<vec.size();i++){
	    cout<<vec[i]<<" ";
	}
	//Insert elements in vector using push_back() and print size
	
	
	vec.push_back(10);
	cout<<endl;
		for(int i=0;i<vec.size();i++){
	    cout<<vec[i]<<" ";
	}
	cout<<endl;
	cout<<vec.size()<<endl;
	
//	Remove last element using pop_back()

vec.pop_back();
for(int i=0;i<vec.size();i++){
	    cout<<vec[i]<<" ";
}
cout<<endl;

  //Find size and capacity of a vector
  
  cout<<vec.size()<<" "<<vec.capacity()<<endl;
  
   //Take n numbers input in vector and find sum of elements
   
   int n;
   cin>>n;
  int sum=0;
   vector<int>vec2;
   for(int i=0;i<n;i++){
       cin>>vec[i];
        
       sum+=vec[i];
       
   }
   cout<<sum<<endl;
   
   //Find maximum and minimum element in vector
   

    int m;
    cin >> m;

    vector<int> vec1(m);

    for(int i=0; i<m; i++){
        cin >> vec1[i];
    }

    int max = vec[0];

    for(int i=1; i<m; i++){
        if(max < vec1[i]){
            max = vec1[i];
        }
    }

    cout << "Maximum = " << max << endl;
    
    
  
	return 0;
}
