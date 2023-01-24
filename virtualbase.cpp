#include <iostream>
using namespace std;
class student
{
	public:
	int rollno;
	string name;
	void getdata()
	{
		cout<<"Enter Rollno: ";
		cin>>rollno;
		cout<<"Enter name: ";
		cin>>name;
	}
};
class subject:virtual public student
{
	public:
	string sub1;
	int s1;
	string sub2;
	int s2;
	void getsub()
	{
		cout<<"Enter subject 1: ";
		cin>>sub1;
		cout<<"Enter subject 2: ";
		cin>>sub2;
	}
};
class language:virtual public student
{	
	public:
	string la1;
	int l1;
	string la2;
	int l2;
	void getla()
	{
		cout<<"Enter language 1: ";
		cin>>la1;
		cout<<"Enter language 2: ";
		cin>>la2;
	}
};
class result:public subject,public language
{
	public:
	void entermark()
	{
		cout<<"\nRoll no: "<<rollno;
		cout<<"\nName: "<<name;
		cout<<"\nEnter mark "<<sub1<<":";
		cin>>s1;
		cout<<"\nEnter mark " <<sub2<<":";
		cin>>s2; 
		cout<<"\nEnter mark "<<la1<<":";
		cin>>l1;
		cout<<"\nEnter mark "<<la2<<":";
		cin>>l2;
	}
	void display()
	{
		cout<<"Roll no: "<<rollno;
		cout<<"\nName: "<<name;
		cout<<"\nMark in "<<sub1<<":"<<s1;
		cout<<"\nMark in "<<sub2<<":"<<s2;
		cout<<"\nMark in "<<la1<<":"<<l1;
		cout<<"\nMark in "<<la2<<":"<<l2;
	}
};
int main()
{
	
	result r;
	r.getdata();
	r.getsub();
	r.getla();
	r.entermark();
	r.display();
}	
			
			
			
