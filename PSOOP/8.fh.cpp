/*

Assignment No-8


*/
#include<iostream>
#include<fstream>
using namespace std;
class student
{
 	char name[20];
 	public:
 	int roll;
 	void getdata()
 	{
 		cout<<"\nRoll No.:";
 		cin>>roll;
 		cout<<"Enter Name:";
 		cin>>name;
 	}
 	void putdata()
 	{
 		cout<<roll<<" \t\t "<<name<<endl;
 	}
};

class seq
{
	public:
	void create(int n)             //create function
	{
		fstream fp("Student.txt",ios::out);
		student s;
		for(int i=0;i<n;i++)
		{
			s.getdata();
			fp.write((char *)&s,sizeof(s));
		}
		fp.close();
	}
	void display()        //display function
	{
		ifstream fp("Student.txt");
		student s;
		fp.read((char *)&s,sizeof(s));
		while(!fp.eof())
		{
			s.putdata();
			fp.read((char *)&s,sizeof(s));
		}//while
		fp.close();
	}
	void add()  //add function
	{
		fstream fp("Student.txt",ios::out|ios::app);
		student s;
		s.getdata();
		fp.write((char *) &s,sizeof(s));
		fp.close();
	}
	void delete1(int rollno)    //delete function
	{
		ifstream fpo("Student.txt");
		ofstream temp("Temp.txt");
		student s;
		int flag=0;
		fpo.read((char *)&s,sizeof(s));
		while(!fpo.eof())
		{

			if(rollno==s.roll)
			{
				cout<<"\nThe Data is Deleted!\n";
				flag=1;
			}
			else
			{
				temp.write((char *)&s,sizeof(s));
			}
			fpo.read((char *)&s,sizeof(s));
		}
		if(flag==0)
			cout<<"\nData Not Found!";
		fpo.close();
		temp.close();
		remove("Student.txt");
		rename("Temp.txt","Student.txt");
	}
	void modify(int rollno)  //modify function
	{
		ifstream fpo("Student.txt");
		ofstream temp("Temp.txt");
		student s;
		int flag=0;
		fpo.read((char *)&s,sizeof(s));
		while(!fpo.eof())
		{

			if(rollno==s.roll)
			{
				cout<<"\nEnter the modified data:";
				s.getdata();
				flag=1;
			}
			temp.write((char *)&s,sizeof(s));
			fpo.read((char *)&s,sizeof(s));
		}
		if(flag==0)
			cout<<"\nData Not Found!";
		fpo.close();
		temp.close();
		remove("Student.txt");
		rename("Temp.txt","Student.txt");
	}
};
int main()
{
	seq a;
	int n,rollno,ch;
	cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
	do
	{
		cout<<"\n\t\tMENU:";
		cout<<"\n\t1.Create\n\t2.Display\n\t3.Add\n\t4.Delete\n\t5.Modify\n\t0.Exit  >>";
		cin>>ch;
		switch(ch)
		{
			case 1:	
					cout<<"\nEnter the number of records you want to enter:";
					cin>>n;
					a.create(n);
					break;
			case 2:	cout<<"Roll No \t Name\n";
					cout<<"=====================\n";
					a.display();
					break;
			case 3:	a.add();
					break;
			case 4:	cout<<"\nEnter the roll no you want to delete:";
					cin>>rollno;
					a.delete1(rollno);
					break;
			case 5:	cout<<"\nEnter the roll no you want to modify:";
					cin>>rollno;
					a.modify(rollno);
					break;

		}
	}while(ch!=0);
	cout<<"\nTHANK YOU\n";
	return 0;
}
