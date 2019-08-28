/*

*/
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main(int argc, char * argv[])
{
	if(argc==3)
	{
		char data[80];
		fstream fp1;
		fstream fp2;
		fp1.open(argv[1],ios::in);
		fp2.open(argv[2],ios::out);
		while(!fp1.eof())
		{
			fp1>>data;
			fp2<<data;
		}
		fp1.close();
		fp2.close();
	}
	else if(argc==2)
	{
		char data;
		fstream fp1;
		fp1.open(argv[1],ios::in);
		while(!fp1.eof())
		{
			fp1>>data;
			cout<<data;
		}
		fp1.close();
	}
	else 
		cout<<"\n\tError Occured";

	cout<<"\n";
	return 0;
}

/*
					++OUTPUT++						
	
itpc-nl-7@administrator:~/Downloads$ ./print cpp10.cpp
#include<iostream>#include<stdlib.h>#include<fstream>usingnamespacestd;intmain(intargc,char*argv[]){if(argc==3){chardata[80];fstreamfp1;fstreamfp2;fp1.open(argv[1],ios::in);fp2.open(argv[2],ios::out);while(!fp1.eof()){fp1>>data;fp2<<data;}fp1.close();fp2.close();}elseif(argc==2){chardata;fstreamfp1;fp1.open(argv[1],ios::in);while(!fp1.eof()){fp1>>data;cout<<data;}fp1.close();}elsecout<<"\n\tErrorOccured";cout<<"\n";return0;}}

itpc-nl-7@administrator:~/Downloads$ ./copy cpp10.cpp abcd.txt


*/
