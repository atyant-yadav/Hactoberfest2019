#include<iostream>
#include<string.h>
using namespace std;

class employee
{
 string company_name;
 string emp_name;
 int emp_id;
 int emp_age;
 int emp_salary;

 public :
 // Default Constructor
 employee()
 {
  cout<<"Default Constructor is called !!"<<endl;
  company_name="Google";
 }
// Parametreized Constructor
  employee(string c_name,string e_name,int e_id,int e_age,int e_salary)
 {
   cout<<"Parameterized Constructor is called !!"<<endl;
   company_name=c_name;
   emp_name=e_name;
   emp_id=e_id;
   emp_age=e_age;
   emp_salary=e_salary;
 }
//Copy constructor
 employee(employee &obj)
 {
   cout<<"Copy Constructor is called !!"<<endl;
   company_name=obj.company_name;
   emp_name=obj.emp_name;
   emp_id=obj.emp_id;
   emp_age=obj.emp_age;
   emp_salary=obj.emp_salary;
 }
 //Destructor
 ~employee()
 {
 cout<<"Destructor is called !!"<<endl;
 }

 void setdata (string e_name,int e_id,int e_age,int e_salary)
 {
   emp_name=e_name;
   emp_id=e_id;
   emp_age=e_age;
   emp_salary=e_salary;
 }
 //To Display
 void display()
 {
  cout<<"Company name is : "<<company_name<<endl;
  cout<<"Employee name is : "<<emp_name<<endl;
  cout<<"Employee id is : "<<emp_id<<endl;
  cout<<"Employee age is : "<<emp_age<<endl;
  cout<<"Employee salary is : "<<emp_salary<<endl<<endl;
 }
};

int main()
{
 employee e1,e2;
 e2.setdata("Dhanraj",1253,22,60000);
 e1.display();
 e2.display();
 employee e3("Amazon","Vinayak",3425,24,70000);
 e3.display();
 employee e4=e2;
 e4.display();
 return 0;
}
