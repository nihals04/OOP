#include<iostream>
#include<stdlib.h>
using namespace std;
class patient
{
        public:
		int ptID;
		string pName;
		
		void getPatientInfo();
		void putPatientInfo();
		void makeApp();
		void diagnosis();
		void billing();
		void printBill();
        private:
		string address;
		string gender;
		int phone;
		string bloodgrp;
		string drName;
		int appDate;
		string diagnosisInfo;
		string medicineInfo;
		int drFee;
		int medCharge;
		int total; 	
};
void patient :: getPatientInfo()
{
	cout<<"Patient ID:";
	cin>>ptID;
	cout<<"Patient Name:";
	cin>>pName;
	cout<<"Enter address:";
	cin>>address;
	cout<<"Enter gender:";
	cin>>gender;
	cout<<"Enter phone num:";
	cin>>phone;
	cout<<"Enter blood grp:";
	cin>>bloodgrp;
}
void patient :: putPatientInfo()
{
	cout<<"\nPatient ID:"<<ptID<<"\n";
	cout<<"Patient Name:"<<pName<<"\n";
	cout<<"Address:"<<address<<"\n";
	cout<<"Gender:"<<gender<<"\n";
	cout<<"Enter phone num:"<<phone<<"\n";
	cout<<"Enter blood grp:"<<bloodgrp<<"\n";	
}
void patient::makeApp()
{
	cout<<"\nDoctor name:";
	cin>>drName;
	cout<<"Appointment Date:";
	cin>>appDate;
}	
void patient::diagnosis()
{
	cout<<"\nDiagnosis Info:";
	cin>>diagnosisInfo;
	cout<<"Medicine Info:";
	cin>>medicineInfo;
}
void patient::billing()	
{
	cout<<"\nEnter doctor fee:";
	cin>>drFee;
	cout<<"Enter medicine charge:";
	cin>>medCharge;
}
void patient::printBill()
{
	total=drFee+medCharge;
	cout<<"\nTotal Bill: "<<total<<"\n";
}	
int main()
{
	patient pt;
	int x;
	while(1)
	{	
		cout<<"\n1. getPatientInfo\n2. putPatientInfo\n3. makeAppointment\n4. Diagnosis\n5. Billing\n6. printBill\n7. QUIT\n";
		cout<<"Enter your choice: ";
		cin>>x;
		switch(x)
		{
			case 1:
			{
				pt.getPatientInfo();
				break;
			}
			case 2:
			{
				pt.putPatientInfo();
				break;
			}
			case 3:
			{
				pt.makeApp();
				break;
			}	
			case 4:
			{
				pt.diagnosis();
				break;
			}
			case 5:
			{
				pt.billing();
				break;
			}
			case 6:
			{
				pt.printBill();
				break;
			}
			case 7:
			{
				exit(0);
			}		

}
}	
}

	
	











	
			
