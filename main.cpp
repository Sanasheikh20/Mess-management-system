#include <iostream>
using namespace std;
class Employee
{
public:
	string ename;
	int employee_id;

	Employee();
	Employee(string name,int id);
	void accept();
	void display();
};
Employee::Employee(){
			ename="ABC";
			employee_id=001;
}
Employee::Employee(string name,int id){
	ename=name;
	employee_id=id;
}
void Employee::accept(){
	cout<<"Enter the Employee Name"<<endl;
	cin>>ename;
	cout<<"Enter the Employee ID"<<endl;
	cin>>employee_id;
}
void Employee::display(){
		cout<<"Employee Name: \t"<<ename<<"\n Employee ID: \t"<<employee_id<<endl;
	}
class SalariedEmployee:public Employee{
public:
	double weekly_salary;
	SalariedEmployee(double ws,string en,int eid);
	SalariedEmployee();
	void earning();
};
SalariedEmployee::SalariedEmployee():Employee(){
	accept();
	weekly_salary=5.5;
}
SalariedEmployee::SalariedEmployee(double ws,string en,int eid):Employee(en,eid){
	weekly_salary=ws;
}
void SalariedEmployee::earning(){
	display();
	cout<<"Weekly Salary:"<<weekly_salary<<endl;
}
class HourlyEmployee::public Employee{
public:
	double wages;
	double hours;
	double hourly_salary;
	HourlyEmployee();
	HourlyEmployee();
}
int main()
{
	SalariedEmployee se1;
	se1.earning();
	SalariedEmployee se2(10.5,"Mel",23);
	se2.earning();
}






