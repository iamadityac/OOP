#include<iostream>
using namespace std;

class personal
{
	protected:
		char name[10],dob[8],bg[4];	
};
class physical
{
	protected:
		int ht,wt;
};
class policy
{
	protected:
		int pol;
		char addr[15];
};
class info:public personal,public physical,public policy
{
	protected:
		char mob[10],lic[10];
	public:
		void accept();
		void display();
		int search(int);
		int edit(int);
};

int main()
{
	info s[10];
	int i,n,choice,key;
	cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
	cout<<"\n\t\t\tEMPLOYEE DATABASE\n";
	cout<<"\n\tEmployee to add(n) = ";
	cin>>n;
	
	for(i=0;i<n;i++)
		s[i].accept();
		
	do
	{
		cout<<"\n------------------------MENU--------------------";
		cout<<"\n\t1:Display\n\t2:Insert\n\t3:Delete\n\t4:Search\n\t5:Edit\n\t  0:EXIT  >>";
		cin>>choice;
		switch(choice)
		{
		case 1:
			cout<<"\n\tNAME\tDOB\tBG\tHeight\tWeight\tPolNo.\tAddr\tMOB\tLic.";
			for(i=0;i<n;i++)
				s[i].display();
			break;
			
		case 2: 
			cout<<"\n\tAdd Employee at which Position = ";
			cin>>key;
			if(key>0&&key<=n)
			{
				for(i=n;i>=key-1;i--)
					s[i+1]=s[i];
				n++;
				s[key-1].accept();
			}
			else 
				cout<<"Employee can't be added at given Position ";
			break;
			
		case 3:
			cout<<"\n\tEnter the PolNo. to DELETE >>";
			cin>>key;
			for(i=0;i<n;i++)
				if(s[i].search(key)==1)
				break;
			if(i==n)
				cout<<"\n\tNo Record to DELETE";
			else
			{
				for(;i<n-1;i++)
				s[i]=s[i+1];
				n--;
			}
			break;
			
		case 4:
			cout<<"\n\tEnter PolNo. to SEARCH >>";
			cin>>key;
			for(i=0;i<n;i++)
				if(s[i].search(key)==1)
				break;
			if(i==n)
				cout<<"\n\tRecord NOT Found";
			break;
			
		case 5:
			cout<<"\n\tEnter PolNo. to EDIT >>";
			cin>>key;
			for(i=0;i<n;i++)
				if(s[i].edit(key)==1)
				break;
			if(i==n)
				cout<<"\n\tNo Record to EDIT";
			break;
			
		}
	}while(choice!=0);

	return 0;
}

void info::accept()
{
	cout<<"\n\tEnter Name >>";
	cin>>name;
	cout<<"\tEnter DOB >>";
	cin>>dob;
	cout<<"\tEnter BG >>";
	cin>>bg;
	cout<<"\tEnter Height >>";
	cin>>ht;
	cout<<"\tEnter Height >>";
	cin>>wt;
	cout<<"\tEnter PolNo. >>";
	cin>>pol;
	cout<<"\tEnter Address >>";
	cin>>addr;
	cout<<"\tEnter MobNo. >>";
	cin>>mob;
	cout<<"\tEnter Lic s>>";
	cin>>lic;
}
void info::display()
{
	cout<<"\n\t"<<name<<"\t"<<dob<<"\t"<<bg<<"\t";
	cout<<ht<<"\t"<<wt<<"\t";
	cout<<pol<<"\t"<<addr<<"\t";
	cout<<mob<<"\t"<<lic;
}
int info::search(int key)
{
	if(key==pol)
	{
		display();
		return 1;	
	}
	else
		return 0;
}
int info::edit(int key)
{
	if(key==pol)
	{
		accept();
		return 1;
	}
	else 
		return 0;
}
