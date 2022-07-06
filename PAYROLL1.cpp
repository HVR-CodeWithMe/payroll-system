
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
#define L 10
int i=0,k=0;
int m[L];
char M[12][12]={"January","February","March","April","May","June","July","Agust","September","Octomber","November","December"};
struct emp
{
	char ename[20];
	int eid;
	char edob[10];
	int ebsal;
	char djoin[10];
	char edes[10];
	char dep[10];
	int ewd;
	int ead;
	}s[L];
class pay
{
	private:float tra=1500,med=500,tx=200;
	float da[L],hra[L],ded[L],pf[L],net[L],gnet[L],gb[L],gda[L],ghra[L];
	public:
	int op;
	void emps();
	void empupd();
	void show();
	friend void mpay(pay &);
	void empde();
	};
void mpay(pay &h)
{
	int x=0;
	if(i==0)
	cout<<"No employee data\n";
	else
	{
		int id;
		cout<<"enter employee Id\n";
		cin>>id;
	for(x=0;x<i;x++)
	{
		if(id==s[x].eid)
		{
	cout<<"Enter month to Calculate Payment\n";
	cin>>m[x];

		cout<<"enter emp days worked\n";
	cin>>s[x].ewd;		
	cout<<"enter emp absence\n";
	cin>>s[x].ead;

	if(m[x]==1||m[x]==3||m[x]==5||m[x]==7||m[x]==8||m[x]==10||m[x]==12)
	{
		if(s[x].ewd+s[x].ead==31)
		{	h.da[x]=s[x].ebsal*0.1;
			h.hra[x]=(s[x].ebsal+h.da[x])*0.3;
			h.gb[x]=(s[x].ebsal*s[x].ewd)/31;
			h.gda[x]=(h.da[x]*s[x].ewd)/31;
			h.ghra[x]=(h.hra[x]*s[x].ewd)/31;
			h.gnet[x]=(h.gb[x]+h.gda[x]+h.ghra[x])+h.tra+h.med;
			
				}
		else
		cout<<"Days in valid\nPlease Re-enter\n";
}
else if(m[x]==4||m[x]==6||m[x]==9||m[x]==11)
	{
		if(s[x].ewd+s[x].ead==30)
		{	h.da[x]=s[x].ebsal*0.1;
			h.hra[x]=(s[x].ebsal+h.da[x])*0.3;
			h.gb[x]=(s[x].ebsal*s[x].ewd)/30;
			h.gda[x]=(h.da[x]*s[x].ewd)/30;
			h.ghra[x]=(h.hra[x]*s[x].ewd)/30;
			h.gnet[x]=(h.gb[x]+h.gda[x]+h.ghra[x])+h.tra+h.med;
			
			
		}
		else
		cout<<"Days in valid\nPlease Re-enter\n";
}
else
	{
		if(s[x].ewd+s[x].ead==28)
		{	h.da[x]=s[x].ebsal*0.1;
			h.hra[x]=(s[x].ebsal+h.da[x])*0.3;
			h.gb[x]=(s[x].ebsal*s[x].ewd)/28;
			h.gda[x]=(h.da[x]*s[x].ewd)/28;
			h.ghra[x]=(h.hra[x]*s[x].ewd)/28;
				h.gnet[x]=(h.gb[x]+h.gda[x]+h.ghra[x])+h.tra+h.med;
				
			
			}
		else
		cout<<"Days in valid\nPlease Re-enter\n";
	}
		}
		cout<<"\nPACKAGE DETAIL\n";
		cout<<"\nBasic Pay  : "<<s[x].ebsal;
		cout<<"\nD.A             :"<<h.da[x];
		cout<<"\nHRA           :"<<h.hra[x];
		cout<<"\nSpecial - Allowances\n";
		cout<<"Medical     : "<<h.med;
		cout<<"\nTravel-Allow: "<<h.tra;
		cout<<"\nTOTAL PAYMENT = "<<s[x].ebsal+h.da[x]+h.hra[x]+h.med+h.tra<<endl;
		cout<<"\n\nGROSS Earned Salary\n";
		cout<<"\nBasic Pay  : "<<h.gb[x];
		cout<<"\nD.A             :"<<h.gda[x];
		cout<<"\nHRA           :"<<h.ghra[x];
		cout<<"\nMedical     : "<<h.med;
		cout<<"\nTravel-Allow: "<<h.tra;
		cout<<"\nTOTAL PAYMENT = "<<h.gnet[x]<<endl;
h.pf[x]=(h.gda[x]+h.gb[x])*.12;
h.ded[x]=h.pf[x]+h.tx;
h.net[x]=h.gnet[x]-h.ded[x];
	cout<<"\nDEDUCTIONS\n";
		cout<<"P.F = "<<h.pf[x]<<endl;
		cout<<"PROFESSION\nTax   : "<<h.tx<<endl;
		cout<<"TOTAL DEDUCTION'S : "<<h.ded[x]<<endl;
		cout<<"NET PAYMENT == "<<round(h.net[x])<<endl;	
		}
}
}
void pay::emps()
{
	cout<<"enter emp id\n";
	cin >> s[i].eid;	
    cout<<"enter emp name\n";
	cin >>s[i].ename;
	cout<<"enter emp department\n";
	cin >>s[i].dep;
	cout<<"enter emp designation\n";
	cin >>s[i].edes;
	cout<<"enter emp date of birth\n";
	cin >>s[i].edob;
	cout<<"enter emp date of joining\n";
	cin >>s[i].djoin;
	cout<<"enter basic salary\n";
	cin>>s[i].ebsal;
	
	i=i+1;	
	}
	void pay::empupd()
	{
		int id;
		cout<<"Enter the Employee Id to update his details\n";
		cin>>id;
		for(int j=0;j<i;j++)
		{
			if(id==s[j].eid)
			{
				int c;
				cout<<"Select option to update\n1.Id\n2.Employee Name\n3.Designation\n4.Department\n5.DOB\n6.Employee Basic Salary\n";
				cout<<"enter your option\n";
				cin>>c;
				switch(c)
				{
						case 1:
				cout << "Enter new id\n";
				cin >> s[j].eid;
				break;
			case 2:
				cout << "Enter new Name\n";
				cin >> s[j].ename;
				break;
			case 3:
				cout << "Enter new Designation\n";
				cin >> s[j].edes;
				break;
			case 4:
				cout << "Enter new Department\n";
				cin >> s[j].dep;
				break;
			case 5:
				cout << "Enter New DOB\n";
				cin >> s[j].edob;
				break;
				
			case 6:
				cout << "Enter New Basic Salary \n";
				cin >> s[j].ebsal;
				break;
				}
				}
			}
			}
void pay::show()
{
	cout<<"\t\t\t\tEMPLYOEE DETAILS\n";
	cout<<"========================================================================================\n";
	cout<<"id\t"<<"name\t"<<"designation\t"<<"Department\t"<<"DOB\t"<<setw(8)<<"DOJ\t"<<setw(8)<<"NODW\t"<<"Absence\t"<<"basic salary\n";
	for(int j=0;j<i;j++)
	{
		cout<<s[j].eid<<"\t"<<s[j].ename<<"\t"<<s[j].edes<<setw(11)<<s[j].dep<<setw(20)<<s[j].edob<<setw(10)<<s[j].djoin<<setw(5)<<s[j].ewd<<"\t"<<s[j].ead<<"\t"<<s[j].ebsal<<"\n";	
			}
}
	
void pay::empde()
{
	int id;
	cout<<"Enter your Id\n";
	cin>>id;
	if(i==0)
	cout<<"No employee data\n";
	for(k=0;k<i;k++)
	{
		if(id==s[k].eid)
		{
			cout<<"_____________________________________________________________________________________________\n";
			cout<<"\t\t\t\tM&H SOLUTIONS\n";
			cout<<"\t\tMetro pillar 151,NH44,Hyderabad,Telangana\n\n";
			cout<<"\t\t\tPayslip for the period of  "<<M[m[k]-1]<< " 2021\n";
			cout<<"_____________________________________________________________________________________________\n";
			cout<<"Employee Id"<<setw(9)<<s[k].eid<<setw(30)<<"Name"<<setw(25)<<s[k].ename<<"\n";
			cout<<"Department"<<setw(10)<<s[k].dep<<setw(37)<<"designation"<<setw(20)<<s[k].edes<<"\n";
			cout<<"Date of birth"<<setw(13)<<s[k].edob<<setw(33)<<"Basic salaray"<<setw(16)<<s[k].ebsal<<"\n";
			cout<<"Date of joining"<<setw(10)<<s[k].djoin<<"\n";
			cout<<"Days worked"<<setw(9)<<s[k].ewd<<"\n";
			cout<<"Absence"<<setw(13)<<s[k].ead;
			cout<<"\n-------------------------------------------------------------------------------------------\n";
			cout<<"Earnings"<<setw(23)<<"Amount"<<setw(25)<<"deductions"<<setw(15)<<"Amount"<<"\n";
			cout<<"-------------------------------------------------------------------------------------------\n";
		cout<<"Basic Pay"<<setw(21)<<gb[k]<<setw(20)<<"P.F"<<setw(21)<<pf[k];
		cout<<"\nD.A"<<setw(27)<<gda[k]<<setw(20)<<"Tax"<<setw(20)<<tx;
		cout<<"\nHRA"<<setw(27)<<ghra[k];
		cout<<"\nMedical"<<setw(23)<<med;
		cout<<"\nTravel-Allow:"<<setw(17)<<tra;
		cout<<"\n-------------------------------------------------------------------------------------------\n";
		cout<<"\nTOTAL Earnings"<<setw(16)<<gnet[k]<<setw(30)<<"TOTAL DEDUCTION'S"<<setw(15)<<ded[k]<<endl;
		cout<<"-------------------------------------------------------------------------------------------\n";
		cout<<"\t\t\t\tNET PAYMENT == "<<round(net[k])<<endl;
		cout<<"_____________________________________________________________________________________________\n";
	   break;
		}	
			}
}
int main()
{
	pay h;
	int op;
	cout<<"\t\t\tPAYROLL SYSTEM\n";
	cout<<"_______________________________________________________________________________\n";
	do
	{
		cout<<"1.manager\n2.Employee\n3.exit\n";
		cout<<"enter your choice \n";
		cin>>op;
		cout<<".......................................\n";
		switch(op)
		{
			case 1:	do
		{
			cout<<".........................................................\n";
		    cout<<"1.add emp details\n2.Get Employee payment\n3.Update employee details\n4.Show Employee details\n5.Exit"<<endl;
			cout<<"enter your choice\n";
			cin>>op;
			cout<<".................................\n";
			switch(op)
			{
				case 1:h.emps();
				
				break;
    			case 2:mpay(h);
				break;
				case 3:h.empupd();
				break;
				case 4:h.show();
				break;	
			}
		}while(op!=5);
			
			break;
			case 2:h.empde();
			break;
		}
	}while(op!=3);
}


	
