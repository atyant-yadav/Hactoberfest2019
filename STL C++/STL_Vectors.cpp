//C++ program to illustrate the vector implementation
#include<iostream> 
#include<vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> a;
    vector<int> v;
  
  	//operations on 1st array
    for(int i=1;i<=10;i++) 
        a.push_back(i*2); 

    //displaying the contents of vector a using begin()
    cout<<"Contents of vector a are:\n"; 
    for(auto i=a.begin();i!=a.end();++i) 
        cout<<*i<<" ";
        cout<<endl;

    //displaying the contents of vector a in reverse using cend()
    cout<<"Contents of the vector a in reverse are:\n"; 
    for(auto i=a.cend()-1;i>=a.begin();--i) 
        cout<<*i<<" ";
        cout<<endl;
        
    int n= a.size(); 

    //inserts 90 to the last position 
    a.push_back(90);
    //printing last element
    cout<<"The last element is:"<<a[n - 1]<<endl;
    

    cout<<"Capacity of vector a is:"<<a.capacity(); 
    cout<<"\nMax Size of vector a is:"<<a.max_size(); 
  
    //resizes the vector size
    a.resize(5);

    //Shrinks the vector 
    a.shrink_to_fit(); 
    cout<<"\nVector elements after shrinking are:\n"; 
    for(auto i=a.begin();i!=a.end();i++) 
    cout<<*i<<" ";
	cout<<endl;

	//operations on 2nd vector
	//assigns or fills n positions of vector with given element
    v.assign(3,10);

    //removes last element 
    v.pop_back(); 
    
    //inserts number at the beginning
	v.insert(v.begin(),20);

    //displaying the contents of vector v
    cout <<"Contents of vector v are:\n"; 
    for(int i=0;i<v.size(); i++) 
    cout<< v[i]<<" ";
	cout<<endl;

	return 0;
}
