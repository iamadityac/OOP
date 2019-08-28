// type command 
#include <fstream>
#include <iostream>
#include<string>
using namespace std;

int main ( int argc, char *argv[] )
{
cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
string line;
  if ( argc != 2 ) 
    cout<<"Insufficient Arguments \n";
  else {
   
    ifstream fp( argv[1] );
   
    if ( !fp.is_open() )
      cout<<"Could not open file\n";
    else {
          while ( getline(fp,line) )
        cout<< line<<"\n";
    }
   fp.close(); 
  }

return 0;
}


