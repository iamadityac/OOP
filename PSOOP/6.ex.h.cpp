#include<iostream>
using namespace std;
int main()
{
    double num,den,ans=0;
    cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
    do
    {
    cout<<"\n\tEnter the Numerator >";
    cin>>num;
    cout<<"\n\tEnter the Denomenator >";
    cin>>den;
    
        try
        {
            if(den<0)
                throw -1;
        
            else if(den==0)
                throw"Denominator = 0";
        
            else 
            {
                ans=num/den;
                cout<<"\n\t\""<<num<<" / "<<den<<" = "<<ans<<"\"\n";
            }
        }    
        catch(const char *s)
        {
            cout<<"\n\tError :\""<<s<<"\"\n";
        }
        catch(int a)
        {
            cout<<"\n\tError :\"Negative Denominator\"\n";
        }
        
    }while(ans==0);
    
    cout<<"\n";
    return 0;
}
