#include<iostream>
using namespace std;

class personal
{
    protected:
    char name[20],mail[20],mob[10],lic[10];
};
class academic
{
    protected:
    struct acad
    {
    	char qualification[10],university[10],year[6],grade[6];
    }a[6];
};
class professional
{
    protected:
    struct prof
    {
    	char company[10],post[10];
    	int exp,sal;
	}b[6];
};

class info:public personal,public professional,public academic
{
	int n1=1,n2=1;
    public:
    void accept();
    void display();
};

int main()
{
    info CV;
    int choice;
    cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
    cout<<"\n\t\t\t**EMPLOYEE CV**\n";
    do
    {
        cout<<"\n\n------------------------------MENU------------------------------";
        cout<<"\n\t1.ACCEPT\n\t2.DISPLAY\n\t0.EXIT \t";
        cin>>choice;
        switch(choice)
        {
            case 1:
                CV.accept();
                break;
                 
            case 2:
            	CV.display();
                break;
         }   
    }while(choice!=0);   
    return 0;
}

//		FUNCTIONS:
void info::accept()
{
    cout<<"\n\n\t\tPersonal records >> \n";
    cout<<"\n\tEnter name = ";
    cin>>name;
    cout<<"\tEnter Mail = ";
    cin>>mail;
    cout<<"\tEnter MobNo. = ";
    cin>>mob;
    cout<<"\tEnter LicNo. = ";
    cin>>lic;
    
    cout<<"\n\n\t\tAcademic details >> \n";
    for(int i=0;i<n1;i++)
    {
    cout<<"\n\tEnter QUALIFICATION = ";
    cin>>a[i].qualification;
    cout<<"\tEnter University = ";
    cin>>a[i].university;
    cout<<"\tEnter Year-of-Passing = ";
    cin>>a[i].year;
    cout<<"\tEnter Grade/Percentage = ";
    cin>>a[i].grade;
    
    cout<<"\n\tAdd More 1:YES 0:NO >";
    cin>>n1;
    	if(n1!=1)	
 		{
    	n1=i+1;
 		break;
 		}
 	n1=i+2;
    }
    
    cout<<"\n\n\t\tProfessional details >> \n";
    for(int i=0;i<n2;i++)
    {
    cout<<"\n\tEnter Company_Name = ";
    cin>>b[i].company;
    cout<<"\tEnter Expirence = ";
    cin>>b[i].exp;
    cout<<"\tEnter Post = ";
    cin>>b[i].post;
    cout<<"\tEnter Salary = ";
    cin>>b[i].sal;
    
    cout<<"\n\tAdd More 1:YES 0:NO >";
    cin>>n2;
    	if(n2!=1)	
 		{
    	n2=i+1;
 		break;
 		}
 	n2=i+2;
	}
}
void info::display()
{
    cout<<"\n--------------------------------------C.V--------------------------------------";
    
    cout<<"\n\n\t-------->>Personal Details : \n";
    cout<<"\n\n\tNAME = "<<name<<"\t\t\t\tPHOTO\n\n";
    cout<<"\n\tContact No. = "<<mob<<"\n\tE-mail =  "<<mail<<"\n\tLicence No. = "<<lic;
    
    cout<<"\n\n\t-------->>Academic Details : \n";
    cout<<"\n\tQualification\tUniversity\tYear\t\tGrade/Percentage\n";
    for(int i=0;i<n1;i++)
    {
    cout<<"\n\t"<<a[i].qualification;
    cout<<"\t\t"<<a[i].university;
   	cout<<"\t\t"<<a[i].year;
    cout<<"\t\t"<<a[i].grade;
    }
    
    cout<<"\n\n\t-------->>Professional Details : \n";
    cout<<"\n\tCompany_Name\tExperience\tPost\t\tSalary\n";
    for(int i=0;i<n2;i++)
    {
    cout<<"\n\t"<<b[i].company;
    cout<<"\t\t"<<b[i].exp;
    cout<<"\t\t"<<b[i].post;
    cout<<"\t\t"<<b[i].sal;
    }
}
