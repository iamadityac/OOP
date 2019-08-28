#include<iostream>
#include<stdlib.h>
using namespace std;

void integer();
void floatdt();

template<class t>
class matrix
{
	private:
		t m[5][5];
		int r,c;
	public:
		void acc();
		void disp();
		void add(matrix<t>,matrix<t>);
		void sub(matrix<t>,matrix<t>);
		void trans();
		void multi(matrix<t>,matrix<t>);
};	

int main()
{
	int ch;
	cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
	cout<<"\n\t\t**Matrix operations**\n";
	do
	{
		cout<<"\n--------------------------------------------------------------------\n";
    	cout<<"\n\tWhich data type u want to use?";
    	cout<<"\n\t1.Integer\n\t2.Float\n\t0.Exit";
    	cin>>ch;
    	switch(ch)
    	{
    		case 1:
    			integer();
    			break;
    			
    		case 2:
    			floatdt();
    			break;
		}
	}while(ch!=0);
}

void integer()
{
    matrix<int>a,b,d;
    int ch;
    do
    {
        cout<<"\n--------------------------------------------------------------------\n";
        cout<<"\n\tWhich operation u want 2 perform on matrix?";
        cout<<"\n\t1.Accept\n\t2.Display\n\t3.Addition\n\t4.Subtraction\n\t5.Transpose\n\t6.Multiplication\n\t0.Exit \t";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\n\tMatrix 1 : ";
	            a.acc();
	            cout<<"\n\tMatrix 2 : ";
	            b.acc();
	            break;
	            
	        case 2:
	            cout<<"\n\tMatrix 1 : \n";
	            a.disp();
	            cout<<"\n\tMatrix 2 : \n";
	            b.disp();
	            break;
	            
	        case 3:
	            d.add(a,b);
	            break;
	            
	        case 4:
	            cout<<"\n\tWhich subtraction u want :\n\t1.A-B\n\t2.B-A\t";
    			cin>>ch;
    			if (ch==1)
                	d.sub(a,b);
   				else
   					d.sub(b,a);
	            break;
	            
	        case 5:
	            cout<<"\n\tWhich matrix's transpose u want :\n\t1.Matrix 1\n\t2.Matrix 2\t";
                cin>>ch;
                if(ch==1)
                {
                    cout<<"\n\tTranspose of matrix 1:\n";
                    a.trans();
                }
                else
                {
                    cout<<"\n\tTranspose of matrix 2:\n";
                    b.trans();
                }
                break;
                
            case 6:
            	cout<<"\n\tWhich multiplication u want :\n\t1.A*B\n\t2.B*A\t";
    			cin>>ch;
    			if (ch==1)
    			{
                	d.multi(a,b);
               		cout<<"\n\tMultiplication is :\n";
   					d.disp();
   				}
   				else
   				{
   					d.multi(b,a);
               		cout<<"\n\tMultiplication is :\n";
   					d.disp();
   				}
                break;
	        
	     }
    }while(ch!=0);
}

void floatdt()
{
    matrix<float>a,b,d;
    int ch;
    do
    {
        cout<<"\n--------------------------------------------------------------------\n";
        cout<<"\n\tWhich operation u want 2 perform on matrix?";
        cout<<"\n\t1.Accept\n\t2.Display\n\t3.Addition\n\t4.Subtraction\n\t5.Transpose\n\t6.Multiplication\n\t0.Exit \t";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\n\tMatrix 1 : ";
	            a.acc();
	            cout<<"\n\tMatrix 2 : ";
	            b.acc();
	            break;
	            
	        case 2:
	            cout<<"\n\tMatrix 1 : \n";
	            a.disp();
	            cout<<"\n\tMatrix 2 : \n";
	            b.disp();
	            break;
	            
	        case 3:
	            d.add(a,b);
	            break;
	            
	        case 4:
	            cout<<"\n\tWhich subtraction u want :\n\t1.A-B\n\t2.B-A\t";
    			cin>>ch;
    			if (ch==1)
                	d.sub(a,b);
   				else
   					d.sub(b,a);
	            break;
	            
	        case 5:
	            cout<<"\n\tWhich matrix's transpose u want :\n\t1.Matrix 1\n\t2.Matrix 2\t";
                cin>>ch;
                if(ch==1)
                {
                    cout<<"\n\tTranspose of matrix 1:\n";
                    a.trans();
                }
                else
                {
                    cout<<"\n\tTranspose of matrix 2:\n";
                    b.trans();
                }
                break;
                
            case 6:
            	cout<<"\n\tWhich multiplication u want :\n\t1.A*B\n\t2.B*A\t";
    			cin>>ch;
    			if (ch==1)
    			{
                	d.multi(a,b);
               		cout<<"\n\tMultiplication is :\n";
   					d.disp();
   				}
   				else
   				{
   					d.multi(b,a);
               		cout<<"\n\tMultiplication is :\n";
   					d.disp();
   				}
                break;
	        
	     }
    }while(ch!=0);
}		
			
template<class t>
void matrix<t>::acc()
{
    int i,j;
    cout<<"\n\tEnter the size of row & column:\n\t";
	cin>>r>>c;
	if ((r<0||c<0)||(r>5||c>5))
	{
	    cout<<"\n\tInvalid size.Enter again\n";
	    acc();
	}
	else
	{
		cout<<"\n\tenter the elements of matrix\n";
		for(i=0;i<r;i++)
		{
	    	for(j=0;j<c;j++)
	    	{
	        	cout<<"\telement["<<i+1<<"]"<<"["<<j+1<<"] = ";
	       		cin>>m[i][j];
	   		}
		}
	}
}

template<class t>
void matrix<t>::disp()
{
    int i,j;
    for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	        if(j==0)
	        	cout<<"\t  "<<m[i][j];
	        else
	        	cout<<"   "<<m[i][j];
	    }
	    		cout<<"\n";
	}
} 

template<class t>
void matrix<t>::add(matrix<t>a, matrix<t>b)
{
    int i,j;
    if(a.r==a.c&&b.r==b.c)
    {
    	cout<<"\n\tAddition is : \n";
    	for(i=0;i<a.r;i++)
		{
	    	for(j=0;j<a.c;j++)
	    	{
	    	    if(j==0)
	    		    cout<<"\t   "<<a.m[i][j]+b.m[i][j];
	    	    else
	    		    cout<<"   "<<a.m[i][j]+b.m[i][j];
	    	}
	    	cout<<"\n";
		}
	}
	else
		cout<<"\n\tAddition can't be performed on given matrices ";
}

template<class t>
void matrix<t>::sub(matrix<t>a, matrix<t>b)
{
    int i,j;
    if(a.r==a.c&&b.r==b.c)
    {
    	cout<<"\n\tSubtraction is :\n";
    	for(i=0;i<a.r;i++)
		{
	    	for(j=0;j<a.c;j++)
	    	{
	    	    if(j==0)
	    		    cout<<"\t   "<<a.m[i][j]-b.m[i][j];
	    	    else
	    		    cout<<"   "<<a.m[i][j]-b.m[i][j];
	    	}
	    	cout<<"\n";
		}
	}
	else
		cout<<"\n\tSubtraction can't be performed on given matrices ";
}      

template<class t>
void matrix<t>::trans()
{
    int i,j;
    for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	        if(j==0)
	        cout<<"\t   "<<m[j][i];
	        else
	        cout<<"   "<<m[j][i];
	    }
	    cout<<"\n";
	}
}

template<class t>
void matrix<t>::multi(matrix<t>a, matrix<t>b)
{
	int i,j,z,ch;
	float y;
	r=a.r;
	c=b.c;
   	if (a.c==b.r)
   	{
   		for(i=0;i<a.r;i++)
    	{
       		for(j=0;j<b.c;j++)
       		{
           		y=0;
           		for(z=0;z<b.r;z++)
            	{
               		y=y+a.m[i][z]*b.m[z][j];
            	}
            	m[i][j]=y;
         	}
     	}
   			
	}  
   	else 
   	    cout<<"\n\tMultiplication can't be performed on given matrices ";
}
 
 
 

