#include<iostream>
using namespace std;

class shape
{
	protected:
			double base, height, len, breadth, area;
			
	public:
		virtual void acc()
		{}
		virtual void calci()
		{}
};


class triangle:public shape
{
	public:
		void acc()
		{
			cout<<"\n\tenter the base & height of triangle : \t";
			cin>>base>>height;
		}
		
		void calci()
		{
			area=0.5*base*height;
			cout<<"\n\tarea of triangle is : \t"<<area<<"\n";;
		}
};

class rectangle:public shape
{
	public:
		void acc()
		{
			cout<<"\n\tenter the length & breadth of rectangle : \t";
			cin>>len>>breadth;
		}
		
		void calci()
		{
			area=len*breadth;
			cout<<"\n\tarea of rectangle is : \t"<<area<<"\n";
		}
};

int main()
{
    cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
	cout<<"\n\t\t**AREA CALCULATOR**\n\t";
	int ch;
	shape *ptr1;
	triangle t;
	rectangle r;
	
	do
	{
		cout<<"\n\tWhich shape's area u wnat 2 calculate ?";
		cout<<"\n\t1.Triangle\n\t2.Rectangle\n\t0.Exit \t";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\n\tTRIANGLE : \t";
			ptr1=&t;
			ptr1->acc();
			ptr1->calci();
			break;
			
		case 2:
			cout<<"\n\n\tRECTANGLE : \t";
			ptr1=&r;
			ptr1->acc();
			ptr1->calci();
			break;
		}
	}while(ch!=0);
	
	return 0;
}
	
	

		
