//C++ code to demonstrate working of list container 
#include<iostream> 
#include<list> 
#include<iterator>
using namespace std; 
bool even(const int &value)
{
    return(value%2)==0; 
}
int main()
{
	list<int> list1,list2={2,4,6};
	list<int>::iterator it=list1.begin();

	//empty()
    if(list1.empty()) 
     cout<<"Empty List\n"; 
    else
     cout<<"Not Empty\n";

    for(int i=0;i<6;++i) 
    { 
        list1.push_back(i);  
    } 

    cout<<"List1 elements are:\n";
    for(it=list1.begin();it!=list1.end();++it)
    cout<<*it<<" ";
    cout<<endl;

    list1.assign(3,25);
    
    //iterator to point at given position 
    advance(it,2);
    list1.insert(it,40);
    advance(it,4);
    list1.insert(it,15);

    //Printing the new list 
    cout<<"The list after insertion operation is:\n"; 
    for(it=list1.begin();it!=list1.end();it++) 
    cout<<*it<<" "; 
	cout<<endl;

	//remove all the values corresponding true to the parameter
	list1.remove_if(even);

	list1.reverse();
	cout<<"The list after reversing and removing even numbers is:\n";
	for(it=list1.begin();it!=list1.end();it++)
	cout<<*it<<" ";
	cout<<endl;

	//transfers all the elements of list2 to list1
	list1.splice(list1.begin(),list2);

	//sort function 
    list1.sort();
    cout<<"The sorted list is:\n";
    for(it=list1.begin();it!=list1.end();++it) 
    cout<<*it<<" ";
	cout<<endl;
	
	//unique operation
    list1.unique();
    cout<<"The final list after unique operation is:\n"; 
    for(it=list1.begin();it!=list1.end();it++) 
    cout<<*it<<" "; 
	cout<<endl;
	list2.clear();

	return 0;
} 