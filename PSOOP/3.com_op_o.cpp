#include<iostream>
using namespace std;

class complex
{
	int real,img;
	
	public :
		complex()
		{
			real = 0;
			img = 0;
		}
				
		void acc();
		void disp();
		friend ostream & operator <<(ostream &out , const complex &A);
		friend istream & operator >>(istream &in , complex &A);		
		friend complex operator + ( complex A , complex B );
		friend complex operator - ( complex A , complex B );
		complex operator * ( complex A );
		complex operator / ( complex A );
};

//MAIN FUNCTION
int main()
{
	int ch,c,in,o;
	complex C,c1,c2;
	cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
	do
	{
		cout<<"\n\n\t\t**COMPLEX NUMBER OPERATIONS**\n";
		cout<<"\n\t___________________________**MENU**_____________________________";
		cout<<"\n\t1.Accept\n\t2.Display\n\t3.Operations\n\t0.Exit \t";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\n\t\t\tAccept\n\n\t";
				cout<<"1. >>\n\t2. FUNCTION \t";
				cin>>in;
				switch(in)
				{
					case 1:
						cin>>c1;
	            		cin>>c2;
	            		break;
	            		
	            	case 2:
	            		c1.acc();
	            		c2.acc();
				}
				break;
			
			case 2:
				cout<<"\n\t\t\tDisplay\n\n\t";
				cout<<"1. <<\n\t2. FUNCTION \t";
				cin>>o;
				switch(o)
				{
					case 1:
						cout<<c1;
	            		cout<<c2;
	            		break;
	            		
	            	case 2:
	            		c1.disp();
	            		c2.disp();
				}
				break;
			
			case 3:	
			
			do
			{
				cout<<"\n\t_________________________**OPERATIONS**________________________\n";
				cout<<"\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division\n\t0.Back \t";
				cin>>c;
						
				switch(c)
				{		
					case 1:
						cout<<"\n\tAddition is :\n\t";
						C=c1+c2;
						C.disp();
						break;
					
					case 2:
						cout<<"\n\tSubtraction is :\n\t";
						C=c1-c2;
						C.disp();
						break;
			
					case 3:
						cout<<"\n\tMultiplication is :\n\t";
						C=c1*c2;
						C.disp();
						break;
						
					case 4:
						cout<<"\n\tDivision is :\n\t";
						C=c1/c2;
						C.disp();
						break;
				}
				
			}while(c!=0);
		}
		
	}while(ch!=0);
	
	return 0;
}

//FUNCTIONS
void complex::acc()
{
	cout<<"\n\tEnter Real no : ";
	cin>>real;
	cout<<"\n\tEnter Imaginary no : ";
	cin>>img;	
}

void complex::disp()
{
	cout<<"\n\t("<<real<<")+("<<img<<")i\n";
}

ostream & operator <<(ostream &out, const complex &A)
{
	cout<<"\n\t("<<A.real<<") + ("<<A.img<<")i\n"<<endl;
	return out;			
}
		
istream & operator >>(istream &in, complex &A)
{
	cout<<"\n\tEnter Real no : ";
	cin>>A.real;
	cout<<"\n\tEnter Imaginary no : ";
	cin>>A.img;			
	return in;
}

complex operator + ( complex A , complex B )
{
	complex C;
	C.real = A.real + B.real;
	C.img = A.img + B.img;
	
	return C;
}

complex operator - ( complex A , complex B )
{
	complex C;
	C.real = A.real - B.real;
	C.img = A.img - B.img;
	
	return C;
}


complex complex::operator * ( complex A )
{
	complex C;
	C.real = ( A.real*real ) - ( A.img*img );
	C.img = ( A.real*img ) + ( A.img*real );
	
	return C;
}

complex complex::operator / ( complex A )
{
	complex C;
	C.real = ( A.real*real ) + ( A.img*img ) / ( ( A.real*A.real ) + ( A.img*A.img ) );
	C.img = ( A.img*real ) + ( A.real*img ) / ( ( A.real*A.real ) + ( A.img*A.img ) ); 
	
	return C;	
}
