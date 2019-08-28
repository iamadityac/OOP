#include<iostream>
using namespace std; 

class complex
{
	double real,img;
	public:
	    complex()
	    {
		    real=0;
		    img=0;
	    }
	    complex(double a,double b)
	    {
		    real=a;
		    img=b;
	    }
	    complex(complex &a)
	    {
		    real=a.real;
		    img=a.img;
	    }
	    void acc();
	    void disp();
	    friend complex operator +(complex n1,complex n2);
	    friend complex operator -(complex n1,complex n2);
	    complex operator *(complex n2);
	    complex operator /(complex n2);
};

int main()
{
	int ch;
	complex n1,n2,c;
	cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
	cout<<"\n\n\t\t**COMPLEX NUMBER OPERATIONS**\n";
	n1.acc();
	n2.acc();
	cout<<"\n\tEntered complex nos. are :";
	n1.disp();
	n2.disp();
	do
	{
        cout<<"\n\n\t___________________________**MENU**_____________________________";
	    cout<<"\n\t1:Addition\n\t2:Subtraction\n\t3:Multiplication\n\t4:Division\n\t0:EXIT \t";
	    cin>>ch;
	    switch(ch)
	    {
		    case 1: 
		        c=n1+n2;
				cout<<"\n\tAddition is : \t"; 
				c.disp();
				break;
				
		    case 2:
		        c=n1-n2;
				cout<<"\n\tSubtraction is : \t";
				c.disp();
				break;
				
		    case 3: 
		        c=n1*n2;
				cout<<"\n\tMultiplication is : \t";
				c.disp();
				break;
				
		    case 4: 
		        c=n1/n2;
				cout<<"\n\tDivision is : \t";
				c.disp();
				break;
	    }
	}while(ch!=0);
	cout<<"\n";
}

void complex::acc()
{
	cout<<"\n\tEnter the REAL and IMAGINARY part of complex no. : \n\t";
	cin>>real>>img;
}

void complex::disp()
{
	cout<<"\n\t"<<real<<" + "<<img<<"i";
}

complex operator +(complex n1,complex n2)
{
	complex c;
	c.real=n1.real+n2.real;
	c.img=n1.img+n2.img;
	return c;
}

complex operator -(complex n1,complex n2)
{
	complex c;
	c.real=n1.real-n2.real;
	c.img=n1.img-n2.img;
	return c;
}

complex complex::operator *(complex n2)
{
	complex c;
	c.real=(real*n2.real)-(img*n2.img);
	c.img=(real*n2.img)+(img*n2.real);
	return c;
}

complex complex::operator /(complex n2)
{
	complex c;
	c.real=((real*n2.real)+(img*n2.img))/(n2.real*n2.real+n2.img*n2.img);
	c.img=(-(real*n2.img)+(img*n2.real))/(n2.real*n2.real+n2.img*n2.img);
	return c;
}
