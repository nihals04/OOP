#include<iostream>
using namespace std;
class student
{
        public:
        int sid;
        string sname;
        int mark;
        int gpa;
        void getpersonaldetails()
        {
                cout<<"Enter student ID: ";
                cin>>sid;
                cout<<"Enter student name: ";
                cin>>sname;
        }
         void putpersonaldetails()
         {
                cout<<"Student ID: "<<sid;
                cout<<"\nStudent Name: "<<sname;
                cout<<"\n";
         }  
};
class teacher
{
        public:
        int tid;
        string tname;
        void getpersonaldetails()
        {
                cout<<"Enter teacher ID: ";
                cin>>tid;
                cout<<"Enter teacher name: ";
                cin>>tname;
        }
         void putpersonaldetails()
         {
                cout<<"Teacher ID: "<<tid;
                cout<<"\nTeacher Name: "<<tname;
                cout<<"\n";
         }       
};
class gradeCard
{
        public:
        int sid;
        int tid;
        int intM1;
        int intM2;
        int asMark1;
        int asMark2;
        int totintasMark;
        int endsemMark;
        int total;
        int gpa;
        void enterMarks()
        {
                cout<<"Enter student ID: ";
                cin>>sid;
                cout<<"Enter teacher ID: ";
                cin>>tid;
                cout<<"Enter assignment mark 1 ";
                cin>>asMark1;
                cout<<"Enter assignment mark 2 ";
                cin>>asMark2;
                cout<<"Enter internal mark 1 ";
                cin>>intM1;
                cout<<"Enter internal mark 2 ";
                cin>>intM2;
                totintasMark=intM1+asMark1+intM2+asMark2;
                cout<<"Total internal marks= "<<totintasMark;
                cout<<"\n";
                cout<<"Enter end sem mark ";
                cin>>endsemMark;
                total=endsemMark+totintasMark;
                compute();
                
          }
          void compute()
          {
                if (total>90)
                {
                        gpa=10;
                      
                }
                else if (80<total and total<90)
                {
                        gpa=9;
                        
                }        
                else if (70<total and total<80)
                {
                        gpa=8;
                        
                }        
                else
                        cout<<"Better luck next time";
           } 
         void viewgradecard()
         {
                 cout<<"\nStudent ID: "<<sid;
                 cout<<"\n";
                 cout<<"Total marks: "<<total;
                 cout<<"\n";
                 cout<<"GPA: "<<gpa;
                 cout<<"\n";
         } 
};         
                                                   
                         
int main()
{
 
  int i=0;
  student[i];
  student st1;
  teacher t1; 
  gradeCard gd1; 
  for(i=0;i<3;i++)
  {
        st[i].getpersonaldetails();
        st[i].putpersonaldetails();
        t[i].getpersonaldetails();
        t[i].putpersonaldetails();
        gd[i].enterMarks();
        gd[i].viewgradecard();
        gradeCard gd[i];
}        
  

 
  
}                      
                
