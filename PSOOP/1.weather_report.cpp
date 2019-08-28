#include<iostream>
using namespace std;
class weather
{
    int day;
    float ht,lt,ar,as;
 
    public:
    weather()
    {
    day=0;
    ht=99;  lt=-99;   ar=0;   as=0;
    }
    weather(int a,int b,int c,int d,int e)
    {
    day=a;
    ht=b;  lt=c;   ar=d;   as=e;
    }
    void accept();
    void display();
    void avg(int);
    weather total(weather s);         
};

void weather::accept()
{
    cout<<"\n\tenter day, high temp, low temp, amt rain, amt snow\n\t";
    cin>>day>>ht>>lt>>ar>>as;
} 
void weather::display()
{
    cout<<"\t"<<day<<"\t"<<ht<<"\t"<<lt<<"\t"<<ar<<"\t"<<as<<"\n";
}
weather weather::total(weather s)
{
    s.ht+=ht;
    s.lt+=lt;
    s.ar+=ar;
    s.as+=as;
    return s;
}
void weather::avg(int n)
{
    ht=ht/n;
    lt=lt/n;
    ar=ar/n;
    as=as/n;
    cout<<"\t"<<day<<"\t"<<ht<<"\t"<<lt<<"\t"<<ar<<"\t"<<as<<"\n\n";
}

int main()
{
    cout<<"\n\t\t ** Dev By Aditya Choudhari (25007) **\n";
    
    cout<<"\n\t\t  WEATHER REPORT\n";	
    int i,n;
    weather w[31], s(0,0,0,0,0);
    cout<<"\n\tenter no. of days:  ",
    cin>>n;
    for(i=0;i<n;i++)
    {
        w[i].accept();
    }
    cout<<"\n\t\t    ANALYSIS\n";
    cout<<"\n\tday\tht\tlt\tar\tas\n";
    for(i=0;i<n;i++)
    {
        w[i].display();
    }
    for(i=0;i<n;i++)
    {
        s=w[i].total(s);
    }
    cout<<"\n\tTOTAL\n";
    s.display();
    cout<<"\n\tAVERAGE\n";
    s.avg(n);
     
    return 0;
}    
