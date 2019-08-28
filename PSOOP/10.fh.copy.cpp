
//copy command 
#include <fstream>
#include <iostream>
using namespace std;

int main ( int argc, char *argv[] )
{
cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
string line;
  if ( argc != 3 ) 
    cout<<"Insufficient Arguments \n";
  else {
   
    ifstream fp	1( argv[1] );
    ofstream fp2( argv[2] );
   
    if ( !fp1.is_open() || !fp2.is_open())
      cout<<"Could not open file\n";
    
    else {

          while ( getline(fp1,line) )
        fp2<<line<<"\n";
    }
   fp1.close(); 
fp2.close(); 
  }

return 0;
}


