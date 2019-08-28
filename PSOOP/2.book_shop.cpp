#include<iostream>
#include<string.h>
using namespace std;
class book
{
	static int totals;
	int *price,*stock;
	char *name,*author,*publisher;
	public:
	book()
	{
	    name= new char[20];
	    author= new char[20];
	    publisher= new char[20];
	    price= new int;
	    stock= new int;
	}
	void accept();
	void display();
	void search(char [10],char [10]);
	void modify(char [10],char [10]);
	void buy(char [10],char [10]);
	static void bcount()
	{
	    cout<<"\n\tTOTAL BOOKS =  "<<totals;
	}
};

int book::totals=0;

int main()
{
    book *b[1];
    int i,k,n,total=0,choice;
    char str1[10],str2[10];
    cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
    cout<<"\n\t\t**BOOK SHOP**\n";
    do 
    {
        cout<<"\n\tChoose OPERATION u want 2 perform.....";
        cout<<"\n\t1.Add books\n\t2.Display books\n\t3.Search books\n\t4.Modify records\n\t5.Buy a book\n\t6:Total Books\t";
        cin>>choice;
        switch(choice)
        {
        case 1:
    	        cout<<"\n\tEnter no. of books to ADD\t";
    	        cin>>n;
    	        for (i=total;i<total+n;i++)
		        {
			        b[i]=new book;
			        b[i]->accept();
    	        }	
    	        total=total+n;
    	        break;
    	
        case 2:
    	        cout<<"\n\tName\tAuthor\tPublisher\tPrice\tStock\n";
                for (i=0;i<total;i++)
		        {
			        b[i]->display();
    	        }
    	        break;
    	
        case 3:
    	        cout<<"\n\tEnter Name & Author of book to SEARCH\n\t";
    	        cin>>str1>>str2;
    	        for (i=0;i<total;i++)
    	        {
    		        b[i]->search(str1,str2);
    	        }
    	        if (i==total)
    	            cout<<"\n\tNo more books found\n";
    	        break;
    	
        case 4:
    	        cout<<"\n\tEnter Name & Author of book to MODIFY\n\t";
    	        cin>>str1>>str2;
    	        for (i=0;i<total;i++)
    	        {
    		        b[i]->modify(str1,str2);
    	        }
    	        if (i==total)
    	            cout<<"\n\tNo more books found  ";
    	        break;
    	
        case 5:
    	        cout<<"\n\tEnter Name & Author of book to BUY\n\t";
    	        cin>>str1>>str2;
    	        for (i=0;i<total;i++)
    	        {
    		        b[i]->buy(str1,str2);
    	        }
    	        break;
    	
        case 6:
    	        book::bcount();
    	        break;
    	
        default:
    	        cout<<"\n\tEnter the correct choice\t";
    	        break;
        }
        cout<<"\n\n\tSelect : \n\t1.Perform another Operation \n\t0.EXIT\t";
        cin>>k;
    }while(k==1);
}

void book::accept()
{
	cout<<"\n\tEnter Name Author Publisher Price Stock\n\t";
	cin>>name>>author>>publisher>>*price>>*stock;
	totals=totals+*stock;
}

void book::display()
{
	cout<<"\n\t"<<name<<"\t"<<author<<"\t"<<publisher<<"\t\t"<<*price<<"\t"<<*stock;
}

void book::search(char str1[10],char str2[10])
{
	if(strcmp(str1,name)==0&&strcmp(str2,author)==0)
	    cout<<"\n\t"<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<*price<<"\t"<<*stock;
}

void book::modify(char str1[10],char str2[10])
{
	if(strcmp(str1,name)==0&&strcmp(str2,author)==0)
	{
	    cout<<"\n\t"<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<*price<<"\t"<<*stock;
	    totals=totals-*stock;
	    cout<<"\n\tEnter New data to Modify\n\t";
	    cin>>name>>author>>publisher>>*price>>*stock;
	    totals=totals+*stock;
	}
}

void book::buy(char str1[10],char str2[10])
{
	int c,i;
	if(strcmp(str1,name)==0&&strcmp(str2,author)==0)
	{
	    cout<<"\n\t"<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<*price<<"\t"<<*stock;
	    cout<<"\n\tHow many books you want to buy? :\t";
	    cin>>c;
	    for(i=0;;i++)
	    {
	        if(c>*stock || c<0)
	        {
	            cout<<"\n\tBooks are not available\n\tEnter again How many books you want to buy? :\t";
	            cin>>c;
	        }
	        else
	        {
	            cout<<"\tPrice is "<<*price*c;
	            *stock=*stock-c;
	            totals=totals-c ;
	            break;
	        }
	    }
	}
}

